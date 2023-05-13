<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Adivinhando a senha</title>  
</head>
<body>
<div class="col-sm-9 col-md-7 col-lg-5 mx-auto">
<div class="row">


<?php
$handle = fopen("senha_gravada.txt", "r");
$senha = $_POST['senha'];
    $line = fgets($handle);
    if($senha==$line){
        echo "<h1>Senha correta!</h1>";
    }else{
        echo "<h1>Senha incorreta!!</h1>";
    }   
fclose($handle);
?>


</div>
</div>

</body>
</html>