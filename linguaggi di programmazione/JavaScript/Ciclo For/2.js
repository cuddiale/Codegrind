// Scrivi un programma che chieda all'utente di inserire un numero N e calcoli la somma di tutti i numeri da 1 a N

const N = parseInt(prompt("Inserisci un numero:"));
let somma = 0;

for (let i = 1; i <= N; i++) {
  somma += i;
}

console.log("La somma è:", somma);
