<?php
require_once('function.php');

$objeto1 = new DBConnect(); 
$del = $_POST['id'];



if ($objeto1->apagar_candidato($del)){
    print("Apagado com sucesso ! ...");
};

unset($objeto1);

$objeto1 = new DBConnect(); 
?>