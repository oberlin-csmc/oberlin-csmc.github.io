<!doctype html>
<html xmlns="http://www.w3.org/1999/xhtml">
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
		<title><?php echo $title; ?></title>
		<link rel="stylesheet" href="styles.css">
	</head>

	<body>
		<div class="body">
			<div class="text" id="menu">
				<a href="index.php" id="D">CSMC News</a>
				<a href="charter.php" id="A">What is CSMC?</a>
				<a href="officers.php" id="B">Who is CSMC?</a>
				<a href="form.php" id="C">Feedback Form</a>
				<a href="tshirts.php" id="E">T-Shirts</a>
				<a href="reference.php" id="F">For Your Reference</a>
				<a href="labs.php" id="G">The Labs!</a>
				<a href="http://occs.oberlin.edu" id="H">What is OCCS?</a>
				<a href="office-hours.php">Office Hours</a>
			</div>
			<div class="text">
				<?php include($filename); ?>
			</div>
			<hr>
			<footer>Contact us by email at <code>csmc<span style="display: none">anti-spam</span>@cs.oberlin.<span style="display: none">anti-spam</span>edu</code>.</footer>
		</div>
	</body>
</html>
