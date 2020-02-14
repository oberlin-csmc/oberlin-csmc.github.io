<?php

function valid_email($email) 
{
	if(!preg_match("/^([a-zA-Z0-9])+([a-zA-Z0-9\._-])*@oberlin\.edu$/", $email)) 
	{
		return FALSE;
	}

   /*
   if(!preg_match("/^([a-zA-Z0-9])+([a-zA-Z0-9\._-])*@([a-zA-Z0-9_-])+\.([a-zA-Z0-9\._-]+)+$/", $email)) 
   {
      return FALSE;
   }
	*/
   return TRUE;
}

?>