// Scrivi un programma che prenda l'età e una variabile booleana che indica se la persona ha una patente, quindi stampi sulla console se la persona è maggiorenne e ha una patente

const età = 20;
const haPatente = true;

if (età >= 18 && haPatente) {
  console.log("La persona è maggiorenne e ha una patente");
} else if (età >= 18 && !haPatente) {
  console.log("La persona è maggiorenne ma non ha una patente");
} else {
  console.log("La persona non è maggiorenne");
}
