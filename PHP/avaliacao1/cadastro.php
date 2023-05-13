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
    <h1>Login</h1>
    <?php if (isset($error_message)) { ?>
        <p><?php echo $error_message; ?></p>
    <?php } ?>
    <form method="post" action="gravar.php">
        <label for="username">Titulo do livro:</label>
        <input type="text" name="titulo" id="titulo" required>
        <br>
        <label for="username">Autor do livro:</label>
        <input type="text" name="autor" id="autor" required>
        <br>
        <label for="username">Genero do livro:</label>
        <input type="text" name="genero" id="genero" required>
        <br>
        <input type="submit" value="Gravar">
        <br><br>
        <a href="sair.php" class="btn btn-danger">Logout</a>
            <br><br>
            
        <h2><a href="ler.php" class="btn btn-danger">Ler livros</a></h2>
            <br><br>

        
    </form>
</body>
</html>