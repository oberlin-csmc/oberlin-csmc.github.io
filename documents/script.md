# Vim Night

## Why vim?

* Hoyle encouraging use
* ease of use: no
* powerful when understood
* portable (ubiquity, non-graphical sessions)

event web page: cs.oberlin.edu/~csmc/documents/vim.html
* outline of material covered
* some stuff not covered
* resources

## Starting vim

(start vim with new file)

## Modal editing

### Insert mode

(note normal mode, enter insert mode)
(insert some text, return to normal mode)

### Normal mode

(overview: keystrokes are commands to move/edit text)

* i for insert (directly before the cursor)
* o for open (above, below)
* d to delete (cut) text
* y to copy (yank)
* p to paste
* c to change text

(movements: after a command, specify text to apply command to)
(with no command, usually just move cursor)

* w to go forward a word
* e to go to the end of the word
* b to go to the beginning of the word
(show movement by word)
* 0 to go to the beginning of the line
* $ to go to the end of the line
* iw applies to the word the cursor is in
* gg to go to the beginning of the file
* G to go to the end of the file

(example: delete a word with dw, change to the end of the line with c$)

(some commands are doubled to apply to whole line: dd, yy, cc)

* / to search and move through text: press / and enter regular expression, then enter
 * n takes you to next occurrence, N backwards
 * demonstrate jumping within a line

* :w to save (write) changes
* :q to quit (or :wq to save and quit)
* :%s/foo/bar/ is regular expression substitution, like `sed`: can look into it on own

(demonstrate visual mode: v to enter, arrow keys, then enter a command)
(V for full-line selection: good for deleting lines)

how to keep learning vim
* use it
* if you think there might be a command, do a web search
* keep a cheat sheet handy to help you find commands--see resources section

vimtutor: vim tutorial in vim itself
* great way to learn basic commands--by doing
(instruct people to start `vimtutor`, stick around to answer questions)
