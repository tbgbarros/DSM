<?php
/*
Escreva um script que imprima qual o maior número.
Converter variáveis strings em inteiros
Use IF
*/
$a = "10";
$b = "1";

settype($a, "integer");
settype($b, "integer");
if($a > $b){
    echo "A variavel $a é maior, e o tipo : ";
    echo gettype($a);
}else{
    echo "A variavel $b é maior, e o tipo : ";
    echo gettype($b);
}

?>