<?php
if($_SERVER["REQUEST_METHOD"] == "POST"){
    session_start();

    $username = "fatec"; 
    $password = "araras";

    if ($_POST["username"] == $username and $_POST["password"] == $password) {
        $_SESSION['login'] = true;
        $_SESSION['username'] = 'Orlando nota 10';
        header("Location: cadastro.php");
    } else {
        $_SESSION['login'] = false;
        header("Location: index.php"); 
    }
}
?>