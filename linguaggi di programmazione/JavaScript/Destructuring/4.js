// Utilizzare il destructuring per estrarre i valori di un oggetto in variabili con nomi diversi.

const persona = {
  nome: "Mario",
  eta: 30,
  città: "Roma",
};

// Destructuring con alias
const { nome: nomePersona, eta: anni, città: cittàPersona } = persona;

console.log(nomePersona); // Mario
console.log(anni); // 30
console.log(cittàPersona); // Roma
