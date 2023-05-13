<?php
    session_start();

    if (isset($_SESSION['login']) && $_SESSION['login'] == false) {
        header("cadastro.php");
        exit;
    }
?>

<!DOCTYPE html>
<html>
<head>
    <title>Livros</title>
</head>
<body>
    <h1>Livros</h1>
    <h2><a href="sair.php" class="btn btn-danger">Sair</a></h2>
            <br><br>
    </body>
</html>    

<?php

$dados = fopen("livros.txt", "r");
if (file_exists("livros.txt")) {
    while (!feof($dados))
    {
        echo  fgets($dados)  . "<br>";
    }
fclose($dados);

    
}

?>