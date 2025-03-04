// Scrivi un programma che prenda un numero da 1 a 12 in input e stampi sulla console il nome del mese corrispondente.

const numeroMese = 9;
let nomeMese;

switch (numeroMese) {
  case 1:
    nomeMese = "Gennaio";
    break;
  case 2:
    nomeMese = "Febbraio";
    break;
  case 3:
    nomeMese = "Marzo";
    break;
  case 4:
    nomeMese = "Aprile";
    break;
  case 5:
    nomeMese = "Maggio";
    break;
  case 6:
    nomeMese = "Giugno";
    break;
  case 7:
    nomeMese = "Luglio";
    break;
  case 8:
    nomeMese = "Agosto";
    break;
  case 9:
    nomeMese = "Settembre";
    break;
  case 10:
    nomeMese = "Ottobre";
    break;
  case 11:
    nomeMese = "Novembre";
    break;
  case 12:
    nomeMese = "Dicembre";
    break;
  default:
    nomeMese = "Mese non valido";
}

console.log(nomeMese);
