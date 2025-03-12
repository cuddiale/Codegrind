// Creare una presentazione di slide che cambiano automaticamente ogni 3 secondi utilizzando setInterval:

const slides = ["Slide 1", "Slide 2", "Slide 3"];
let indice = 0;

function cambiaSlide() {
  console.log(slides[indice]);

  indice++;

  if (indice === slides.length) {
    indice = 0;
  }
}

setInterval(cambiaSlide, 3000);
