<?php

include_once('get_db.php');

function insert_nomination($name, $email) {

	$sql = get_db();
	if (!$sql)
		return false;
	
	$querystring = "INSERT INTO candidates (name, email) VALUES (?, ?)";
	
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
}

?>
