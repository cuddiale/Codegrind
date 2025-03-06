// Scrivi una funzione che prenda due parametri, base e altezza, e restituisca l'area del rettangolo corrispondente.

function calcolaAreaRettangolo(base, altezza) {
  return base * altezza;
}

const base = 5;
const altezza = 3;
const area = calcolaAreaRettangolo(base, altezza);

console.log("L'area del rettangolo è:", area);
