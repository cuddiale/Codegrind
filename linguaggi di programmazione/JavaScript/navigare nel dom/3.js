// Selezionare tutti gli elementi di un determinato tag e modificarne il testo.

<!DOCTYPE html>
<html>
  <head>
    <title>Selezionare Elementi per Tag</title>
  </head>
  <body>
    <p>Paragrafo 1</p>
    <p>Paragrafo 2</p>
    <p>Paragrafo 3</p>
    <script>
      const paragrafi = document.getElementsByTagName("p");
      for (let paragrafo of paragrafi) {
        paragrafo.textContent = "Testo modificato";
      }
    </script>
  </body>
</html>