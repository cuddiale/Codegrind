// Selezionare un elemento del DOM e navigare tra i suoi fratelli per modificarne lo stile.

<!DOCTYPE html>
<html>
  <head>
    <title>Navigare tra i Fratelli</title>
  </head>
  <body>
    <div>
      <p id="target">Fratello target</p>
      <p>Fratello successivo</p>
    </div>
    <script>
      const target = document.getElementById("target");
      const fratelloSuccessivo = target.nextElementSibling;

      fratelloSuccessivo.style.fontWeight = "bold";
    </script>
  </body>
</html>