// Scrivi un programma che prenda tre lati di un triangolo (a, b, c) in input e stampi sulla console il tipo di triangolo corrispondente ("Equilatero", "Isoscele", "Scaleno").

const latoA = 5;
const latoB = 4;
const latoC = 5;
let tipoTriangolo;

switch (true) {
  case latoA === latoB && latoB === latoC:
    tipoTriangolo = "Equilatero";
    break;
  case latoA === latoB || latoB === latoC || latoA === latoC:
    tipoTriangolo = "Isoscele";
    break;
  default:
    tipoTriangolo = "Scaleno";
}

console.log(tipoTriangolo);
