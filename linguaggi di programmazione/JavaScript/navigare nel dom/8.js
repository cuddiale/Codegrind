// Selezionare il primo e l'ultimo elemento figlio di un contenitore e modificarne il contenuto.

<!DOCTYPE html>
<html>
  <head>
    <title>Selezionare il Primo e l'Ultimo Elemento Figlio</title>
  </head>
  <body>
    <div id="contenitore">
      <p>Primo figlio</p>
      <p>Secondo figlio</p>
      <p>Terzo figlio</p>
    </div>
    <script>
      const contenitore = document.getElementById("contenitore");
      const primoFiglio = contenitore.firstElementChild;
      const ultimoFiglio = contenitore.lastElementChild;

      primoFiglio.textContent = "Primo figlio modificato";
      ultimoFiglio.textContent = "Ultimo figlio modificato";
    </script>
  </body>
</html>