// Aggiungere un attributo `title` a un paragrafo.

<!DOCTYPE html>
<html>
  <head>
    <title>Aggiunta di un Attributo</title>
  </head>
  <body>
    <p id="paragrafo">Passa il mouse su questo paragrafo.</p>
    <button onclick="aggiungiAttributo()">Aggiungi Attributo</button>

    <script>
      function aggiungiAttributo() {
        var p = document.getElementById("paragrafo");
        p.setAttribute("title", "Questo è un tooltip.");
      }
    </script>
  </body>
</html>