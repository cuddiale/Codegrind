// Selezionare un elemento del DOM utilizzando il suo ID e modificarne il contenuto.

<!DOCTYPE html>
<html>
  <head>
    <title>Selezionare un Elemento per ID</title>
  </head>
  <body>
    <div id="contenuto">Testo originale</div>
    <script>
      const elemento = document.getElementById("contenuto");
      elemento.textContent = "Testo modificato";
    </script>
  </body>
</html>