<?php
require_once('function.php');

$objeto1 = new DBConnect(); 

$nome = $_POST['nome'];
$cpf = $_POST['rg_cpf'];
$telefone = $_POST['telefone'];
$esc= $_POST['esc_publica'];

if ($objeto1->listar_candidato($nome ,$cpf,$telefone, $esc)){
    print("Lista de candidatos! ...");
};

unset($objeto1);

$objeto1 = new DBConnect(); 
?>