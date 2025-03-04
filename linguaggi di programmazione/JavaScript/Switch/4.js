// Scrivi un programma che prenda un numero da 1 a 5 in input e stampi sulla console il giorno lavorativo corrispondente (dal lunedì al venerdì).

const numeroGiorno = 3;
let giornoLavorativo;

switch (numeroGiorno) {
  case 1:
    giornoLavorativo = "Lunedì";
    break;
  case 2:
    giornoLavorativo = "Martedì";
    break;
  case 3:
    giornoLavorativo = "Mercoledì";
    break;
  case 4:
    giornoLavorativo = "Giovedì";
    break;
  case 5:
    giornoLavorativo = "Venerdì";
    break;
  default:
    giornoLavorativo = "Giorno non lavorativo";
}

console.log(giornoLavorativo);
