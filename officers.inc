<h1>CSMC Officers Through The Years</h1>

<?php
/*
 * Pull the members of each year out of the named JSON file.
 * The 'structured' property tells whether members have titles or email addresses.
 * jcornell, 2017
 */
$contents = file_get_contents("./officers.json");
$years = json_decode($contents);
foreach ($years as $year) {
	echo "<h2>" . htmlspecialchars($year->year) . "</h2>\n";
	echo "<table class=\"officers\">";
	echo "<thead>";
	echo "<tr>";
	echo "<th class=\"left\">" . ($year->structured ? "Role" : "Name") . "</th>";
	echo "<th class=\"right\">" . ($year->structured ? "Name" : "Email") . "</th>";
	echo "</tr>";
	echo "</thead>";
	echo "<tbody>\n";
	foreach ($year->members as $member) {
		if ($year->structured) {
			$left_content = htmlspecialchars($member->role);
			$right_content = htmlspecialchars($member->name);
		} else {
			$left_content = htmlspecialchars($member->name);
			$right_content = "<code>" . htmlspecialchars($member->email) . "</code>";
		}
		echo "<tr>";
		echo "<td class=\"left\">" . $left_content . "</td>";
		echo "<td class=\"right\">" . $right_content . "</td>";
		echo "</tr>\n";
	}
	echo "</tbody>";
	echo "</table>\n\n";
}
?>

<h2>Notes</h2>

<p>By popular vote, the committee was reduced to five members at the end of the 2004-2005 school year.</p>
<p>The 2004-2005 school year was the last that CSMC adhered to a rigid committee structure. Under the rigid committee structure, students were elected to specific positions regardless of their class year.</p>
<p>All email addresses are <code>@oberlin.edu</code>.</p>
