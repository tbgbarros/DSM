<?php
session_start();

$dados = fopen("livros.txt", "a");
fwrite($dados, "\n" . "Titulo: " . $_POST['titulo']);
fwrite($dados, "\n" . "Autor: " .  $_POST['autor']);
fwrite($dados, "\n" . "Genero: " .  $_POST['genero']);
fwrite($dados, "\n" . "  " .  $_POST['']);
fflush($dados);
fclose($dados);

header("Location: dados.php"); 

?>