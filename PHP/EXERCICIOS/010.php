<?php
/*
Faça o cálculo da média simples de 
$nota_1 e $nota_2.
Imprima a média simples.
Imprima a condição:
    Se a média menor ou igual a 4.9, reprovado.
    Se a média entre 5 e 7, recuperação.
    Se a média acima de 7, aprovado.

Crie uma função com o nome calculo_media.
*/
$nota_1 = 9;
$nota_2 = 4;
function total($nota_1, $nota_2){  
 
$media=($nota_1+$nota_2)/2;

echo "A media da nota é $media ";

if($media <= 4.9){
    echo "<br>";
    echo "Voce foi reprovado! ";
    echo "<br>";
}elseif($media <= 7){
    echo "<br>";   
    echo "Voce está em recuperação";
    echo "<br>";
}else{
    echo "Voce foi aprovado";
}
return $media;
  
}
total($nota_1,$nota_2);



?>