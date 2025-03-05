// Incrementare di 1 l'età di ogni persona in un array di oggetti.

const persone = [
  { nome: "Alice", età: 25 },
  { nome: "Bob", età: 30 },
  { nome: "Carol", età: 35 },
];
const incrementato = persone.map((persona) => ({
  ...persona,
  età: persona.età + 1,
}));

console.log(incrementato);
// [
//   { nome: 'Alice', età: 26 },
//   { nome: 'Bob', età: 31 },
//   { nome: 'Carol', età: 36 }
// ]
