// Scrivi un programma che chieda all'utente di inserire una stringa e un numero N, quindi stampi la stringa ripetuta N volte.

const stringa = prompt("Inserisci una stringa:");
const N = parseInt(prompt("Inserisci un numero:"));
let risultato = "";

for (let i = 0; i < N; i++) {
  risultato += stringa;
}

console.log("Risultato:", risultato);
