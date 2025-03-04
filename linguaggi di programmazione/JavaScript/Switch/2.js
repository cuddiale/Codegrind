// Scrivi un programma che prenda una lettera in input rappresentante il tipo di veicolo ("A" per auto, "M" per moto, "B" per bicicletta) e stampi sulla console la descrizione corrispondente.

const tipoVeicolo = "M";
let descrizioneVeicolo;

switch (tipoVeicolo) {
  case "A":
    descrizioneVeicolo = "Questo è un'auto";
    break;
  case "M":
    descrizioneVeicolo = "Questa è una moto";
    break;
  case "B":
    descrizioneVeicolo = "Questa è una bicicletta";
    break;
  default:
    descrizioneVeicolo = "Tipo veicolo non valido";
}

console.log(descrizioneVeicolo);
