// Utilizzare `querySelectorAll` per selezionare tutti gli elementi che corrispondono a un selettore CSS e modificarne lo stile.

<!DOCTYPE html>
<html>
  <head>
    <title>Selezionare Elementi con querySelectorAll</title>
  </head>
  <body>
    <div class="contenitore">Contenitore 1</div>
    <div class="contenitore">Contenitore 2</div>
    <script>
      const elementi = document.querySelectorAll(".contenitore");
      elementi.forEach((elemento) => {
        elemento.style.color = "red";
      });
    </script>
  </body>
</html>