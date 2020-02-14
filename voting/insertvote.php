<?php

include_once('getdb.php');
/*
function insertvote($tnum, $email, $under1, $under2, $under3, $upper1, $upper2, $upper3) {
	$sql = getdb();
	if (!$sql)
		return false;
	
	$querystring = "INSERT INTO voting (tnum, email, ) VALUES (?, ?)";
	
	$statement = $sql->prepare($querystring);
	
	if (!$statement) {
		return false;
	}
	
	$success = $statement->bind_param("ss", $name, $email);
	if (!$success) {
		return false;
	}
	
	$success = $success && $statement->execute();
	
	$success = $success && $statement->close();
	
	return $success;	
}*/

?>