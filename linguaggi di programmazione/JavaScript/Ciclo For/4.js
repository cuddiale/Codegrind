// Scrivi un programma che chieda all'utente di inserire un numero e calcoli il suo fattoriale.

const numero = parseInt(prompt("Inserisci un numero:"));
let fattoriale = 1;

for (let i = 1; i <= numero; i++) {
  fattoriale *= i;
}

console.log("Il fattoriale di", numero, "è:", fattoriale);
