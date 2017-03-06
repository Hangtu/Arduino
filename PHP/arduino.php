<?php
 echo $_REQUEST["numero"];
 $conexion= fopen("COM7","w");
 fwrite($conexion,$_REQUEST["numero"]);
 fclose($conexion);
?>