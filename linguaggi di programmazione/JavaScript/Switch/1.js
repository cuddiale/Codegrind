// Scrivi un programma che prenda un numero da 1 a 7 in input e stampi sulla console il giorno della settimana corrispondente.

const numeroGiorno = 3;
let giornoSettimana;

switch (numeroGiorno) {
  case 1:
    giornoSettimana = "Lunedì";
    break;
  case 2:
    giornoSettimana = "Martedì";
    break;
  case 3:
    giornoSettimana = "Mercoledì";
    break;
  case 4:
    giornoSettimana = "Giovedì";
    break;
  case 5:
    giornoSettimana = "Venerdì";
    break;
  case 6:
    giornoSettimana = "Sabato";
    break;
  case 7:
    giornoSettimana = "Domenica";
    break;
  default:
    giornoSettimana = "Numero giorno non valido";
}

console.log(giornoSettimana);
