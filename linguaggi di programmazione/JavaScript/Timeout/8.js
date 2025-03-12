// Creare un effetto di dissolvenza che cambia gradualmente lo sfondo della pagina dopo 2 secondi utilizzando setTimeout:

setTimeout(function () {
  document.body.style.transition = "background-color 1s ease";
  document.body.style.backgroundColor = "blue";
}, 2000);
