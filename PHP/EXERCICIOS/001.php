<?php
/*
Variáveis 
*/

$variavel_1 = 'texto';
// Imprimir o valor a variável e o seu tipo
echo "A variavel 1 é $variavel_1 ";
echo gettype($variavel_1);

echo '<br>';
$variavel_2 = 123;
// Imprimir o valor a variável e o seu tipo
echo "A variavel 2 é $variavel_2 ";
echo gettype($variavel_2);

echo '<br>';

$variavel_3 = 1;
// Imprimir o valor a variável e o seu tipo
echo "A variavel 3 é $variavel_3 ";
echo gettype($variavel_3);

echo '<br>';

$array = [
    "foo" => "bar",
    "bar" => "foo",
];
// Imprimir o valor a variável e o seu tipo
echo "A variavel 3 é ";

echo var_dump($array);

?>