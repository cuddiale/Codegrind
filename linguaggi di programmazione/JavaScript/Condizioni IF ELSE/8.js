// Scrivi un programma che prenda un numero da 1 a 7 e stampi sulla console il giorno della settimana corrispondente. Considera il caso in cui il numero possa essere errato.

const numeroGiorno = 3;
let giornoSettimana;

if (numeroGiorno === 1) {
  giornoSettimana = "Lunedì";
} else if (numeroGiorno === 2) {
  giornoSettimana = "Martedì";
} else if (numeroGiorno === 3) {
  giornoSettimana = "Mercoledì";
} else if (numeroGiorno === 4) {
  giornoSettimana = "Giovedì";
} else if (numeroGiorno === 5) {
  giornoSettimana = "Venerdì";
} else if (numeroGiorno === 6) {
  giornoSettimana = "Sabato";
} else if (numeroGiorno === 7) {
  giornoSettimana = "Domenica";
} else {
  giornoSettimana = "Numero giorno non valido";
}

console.log(giornoSettimana);
