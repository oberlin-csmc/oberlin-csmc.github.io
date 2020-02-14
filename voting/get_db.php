<?php

function get_db() {
	$sql = new mysqli("localhost", "csmc", "laracroft", "csmc");
	return $sql;
}	

?>