// Estrarre i nomi da un array di oggetti.

const persone = [
  { nome: "Alice", età: 25 },
  { nome: "Bob", età: 30 },
  { nome: "Carol", età: 35 },
];
const nomi = persone.map((persona) => persona.nome);

console.log(nomi); // ["Alice", "Bob", "Carol"]
