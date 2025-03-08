// Selezionare tutti gli elementi con una determinata classe e cambiarne il colore di sfondo.

<!DOCTYPE html>
<html>
  <head>
    <title>Selezionare Elementi per Classe</title>
  </head>
  <body>
    <div class="box">Box 1</div>
    <div class="box">Box 2</div>
    <div class="box">Box 3</div>
    <script>
      const elementi = document.getElementsByClassName("box");
      for (let elemento of elementi) {
        elemento.style.backgroundColor = "yellow";
      }
    </script>
  </body>
</html>