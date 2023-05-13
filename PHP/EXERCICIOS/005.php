<?php
/*
Escreva um script que imprima qual o maior número.
Use IF .. ELSE
*/
$a = 10;
$b = 1;
$c = 40;

if($a > $b && $a > $c){
    echo "A variavel $a é maior, e o tipo : ";
    echo gettype($a);
}elseif($b > $c && $b > $a){
    echo "A variavel $b é maior, e o tipo : ";
    echo gettype($b);
}else{
    echo "A variavel $c é maior, e o tipo : ";
    echo gettype($c);
}

?>