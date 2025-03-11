// Recuperare un oggetto dal Session Storage e convertirlo da JSON a oggetto JavaScript.

const utente = { nome: "Alice", età: 25 };
sessionStorage.setItem("utente", JSON.stringify(utente));
const utenteSalvato = JSON.parse(sessionStorage.getItem("utente"));
console.log(utenteSalvato); // { nome: 'Alice', età: 25 }
