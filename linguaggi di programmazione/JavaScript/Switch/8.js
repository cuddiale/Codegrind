// Scrivi un programma che prenda un codice di lingua (ad esempio, "en" per inglese, "it" per italiano, "es" per spagnolo) in input e stampi sulla console il messaggio di benvenuto corrispondente alla lingua selezionata.

const lingua = "es";
let messaggio;

switch (lingua) {
  case "en":
    messaggio = "Welcome!";
    break;
  case "it":
    messaggio = "Benvenuto!";
    break;
  case "es":
    messaggio = "¡Bienvenido!";
    break;
  default:
    messaggio = "Language not supported";
}

console.log(messaggio);
