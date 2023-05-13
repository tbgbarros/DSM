<?php
/*
Descrubra se $numero é :
 - Divisível por 10
 - Divisível por 3
 - Se não é divisível por nenhum destes 

Imprimir mensagem na tela do número e as condições acima.
*/
$numero = 150;

if($numero % 10 == 0){
    echo "É divisivel por 10";
    echo "<br>";
}else{
    echo "Não é divisivel por 10";
    echo "<br>";
}

if($numero % 3 == 0){
    echo "É divisivel por 3";
    echo "<br>";
}else{
    echo "Não é divisivel por 3";
}
?>