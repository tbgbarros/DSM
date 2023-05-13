<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Passagem de Parâmetros via POST</title>
</head>
<body>
    <form action="parametros_post_02.php" method="post">
        <label for="firstName">Primeiro Nome:</label>
        <input type="text" id="firstName" name="firstName"><br><br>
        <label for="lastName">Sobrenome:</label>
        <input type="text" id="lastName" name="lastName"><br><br>
        <input type="submit" value="Enviar">

        <div class="form-group">
            <a href="listar.php" class="btn btn-danger">Listar cadastros</a>
        </div>

        <div class="form-group">
            <a href="apagar.php" class="btn btn-danger">Apagar cadastros</a>
        </div>
    </form>


</body>
</html>
