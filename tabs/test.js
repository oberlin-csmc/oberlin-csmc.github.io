$.getJSON( "test.json", function( json ) {
    // console.log( "JSON Data received, name is " + JSON.stringify(json, null, "    "));
    for (var year of json) {
      console.log("year" + year.year)
      for (var member in year.members) {
        console.log(member)
      }
    }
});
