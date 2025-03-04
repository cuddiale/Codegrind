// Scrivi un programma che prenda un numero da 1 a 12 rappresentante un mese dell'anno e stampi sulla console la stagione corrispondente, ignorando il fatto che le stagioni cambino intorno al 21 del mese.

const numeroMese = 8;
let stagione;

switch (numeroMese) {
  case 1:
  case 2:
  case 12:
    stagione = "Inverno";
    break;
  case 3:
  case 4:
  case 5:
    stagione = "Primavera";
    break;
  case 6:
  case 7:
  case 8:
    stagione = "Estate";
    break;
  case 9:
  case 10:
  case 11:
    stagione = "Autunno";
    break;
  default:
    stagione = "Mese non valido";
}

console.log(stagione);
