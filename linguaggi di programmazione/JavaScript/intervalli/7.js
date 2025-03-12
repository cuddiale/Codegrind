// Creare un effetto di animazione che sposta un elemento gradualmente orizzontalmente utilizzando setInterval:

const elemento = document.getElementById("elemento");
let posizione = 0;

const intervallo = setInterval(function () {
  posizione += 10;
  elemento.style.transform = `translateX(${posizione}px)`;

  if (posizione >= 200) {
    clearInterval(intervallo);
  }
}, 100);
