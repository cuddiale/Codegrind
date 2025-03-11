// Verificare se un elemento ha un attributo `class`.

<!DOCTYPE html>
<html>
  <head>
    <title>Verifica di un Attributo</title>
  </head>
  <body>
    <div id="contenitore" class="box">Contenitore</div>
    <button onclick="verificaAttributo()">Verifica Attributo</button>

    <script>
      function verificaAttributo() {
        var div = document.getElementById("contenitore");
        if (div.hasAttribute("class")) {
          alert("L'attributo 'class' esiste.");
        } else {
          alert("L'attributo 'class' non esiste.");
        }
      }
    </script>
  </body>
</html>