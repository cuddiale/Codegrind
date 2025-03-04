// Scrivi un programma che prenda un anno e stampi sulla console se è bisestile o no.

const anno = 2024;

if ((anno % 4 === 0 && anno % 100 !== 0) || anno % 400 === 0) {
  console.log("L'anno è bisestile");
} else {
  console.log("L'anno non è bisestile");
}
