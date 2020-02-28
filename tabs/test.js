$.getJSON( "test.json", function( json ) {
    // console.log( "JSON Data received, name is " + JSON.stringify(json, null, "    "));
    var outer = document.createElement("div");
    for (var year of json) {
      console.log("year: " + year.year)
      var year = document.createTextNode(year.year);
      outer.appendChild(node);

      // for (var indx in year.members) {
      //   var member = year.members[indx]
      // }
    }
    document.body.appendChild(outer);
});
