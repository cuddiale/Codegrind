// Modificare la proprietà `style` di un elemento `div` per cambiarne il colore di sfondo.

<!DOCTYPE html>
<html>
  <head>
    <title>Modifica della Proprietà style</title>
  </head>
  <body>
    <div
      id="contenitore"
      style="width: 100px; height: 100px; background-color: red;"></div>
    <button onclick="cambiaColore()">Cambia Colore</button>

    <script>
      function cambiaColore() {
        var div = document.getElementById("contenitore");
        div.style.backgroundColor = "blue";
      }
    </script>
  </body>
</html>