#include <stdio.h>
#include <stdlib.h>

#define MAX_ENTRIES 10000

typedef struct {
    char *name;
    char *val;
} entry;

char *makeword(char *line, char stop);
char *fmakeword(FILE *f, char stop, int *len);
char x2c(char *what);
void unescape_url(char *url);
void plustospace(char *str);

main(int argc, char *argv[]) {
    entry entries[MAX_ENTRIES];
    register int x,m=0;
    int cl, found=0;
    FILE *fp;
    char filename[50], coursenum[4];

    printf("Content-type: text/html%c%c",10,10);

    if(!getenv("REQUEST_METHOD") || strcmp(getenv("REQUEST_METHOD"),"POST")) {
        printf("This script should be referenced with a METHOD of POST.\n");
        printf("If you don't understand this, see this:\n ");
        printf("<A HREF=\"http://www.ncsa.uiuc.edu/SDG/Software/Mosaic/Docs/fill-out-forms/overview.html\">forms overview</A>.%c",10);
        exit(1);
    }
    if(!getenv("CONTENT_TYPE") || strcmp(getenv("CONTENT_TYPE"),"application/x-www-form-urlencoded")) {
        printf("This script can only be used to decode form results. \n");
        exit(1);
    }
    cl = atoi(getenv("CONTENT_LENGTH"));

    for(x=0;cl && (!feof(stdin));x++) {
        m=x;
        entries[x].val = fmakeword(stdin,'&',&cl);
        plustospace(entries[x].val);
        unescape_url(entries[x].val);
        entries[x].name = makeword(entries[x].val,'=');
    }

    x=0;
    while ((x <= m) && (!found)) {
      if (!strcmp(entries[x].name, "Course")) {
	found = 1;
	coursenum[0] = entries[x].val[0];
	coursenum[1] = entries[x].val[1];
	coursenum[2] = entries[x].val[2];
	coursenum[3] = '\0';
      }
    }

    if (!found) {
      printf("This script should only be used for the CSMC evaluation form.\n");
      exit(1);
    }

    strcpy(filename,"/www/htdocs/students/csmc/evaluations/");
    strcat(filename,coursenum);
    strcat(filename,".eval.html");

    if ((fp = fopen(filename,"a")) == NULL) {
      printf("error: file %s not found.\n", filename);
      exit(1);
    }

    printf("<H1>Form Submitted</H1>");
    printf("The information you submitted has been recorded.  Thank you.<P>\n");
    printf("<ADDRESS><A HREF=\"http://www.cs.oberlin.edu/students/csmc/Default.html\">csmc@cs.oberlin.edu</A></ADDRESS>\n");

    fprintf(fp, "<ul>%c\n",10);

    for(x=0; x <= m; x++)
        fprintf(fp, "<li> <code>%s = %s</code>%c\n",entries[x].name,
               entries[x].val,10);
    fprintf(fp, "</ul>%c\n",10);

    fprintf(fp, "<HR>\n");
}
