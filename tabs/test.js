$.getJSON( "test.json", function( json ) {
    // console.log( "JSON Data received, name is " + JSON.stringify(json, null, "    "));
    var outer = document.createElement("div");
    for (var year of json) {
      // console.log("year: " + year.year)
      var year_node = document.createElement("div")
      var year_header = document.createElement("H3")
      var year_text = document.createTextNode(year.year);
      year_header.appendChild(year_text);
      year_node.appendChild(year_header);
      outer.append(year_node)
      // for (var indx in year.members) {
      //   var member = year.members[indx]
      // }
    }
    document.body.appendChild(outer);
});
