// Scrivi un programma che prenda un numero N in input e stampi una piramide di asterischi con N righe.

const N = parseInt(prompt("Inserisci un numero:"));

for (let i = 1; i <= N; i++) {
  let riga = "";
  for (let j = 1; j <= i; j++) {
    riga += "* ";
  }
  console.log(riga);
}
