<?php
    session_start();

    if (isset($_SESSION['login']) && $_SESSION['login'] == false) {
        header("index.php");
        exit;
    }
?>

<!DOCTYPE html>
<html>
<head>
    <title>Login</title>
</head>
<body>
        <h1>  Lista de Livros </h1>
            <?php
                if(file_exists("Location: livros.txt"))
                {
                    $dados = fopen("Location: livros.txt", "r");
                    while(!feof($dados))
                    {
                        echo fgets($dados) . "<br>";
                    }
                }else
                {
                    echo "ERROR 404 <br>";
                    header("location: cadastro.php");
                }
            ?>
        <br><br>

    </body>
</html>