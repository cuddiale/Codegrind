// Utilizzare il destructuring per estrarre i valori di un oggetto in variabili separate.

const persona = {
  nome: "Mario",
  eta: 30,
  città: "Roma",
};

// Destructuring dell'oggetto
const { nome, eta, città } = persona;

console.log(nome); // Mario
console.log(eta); // 30
console.log(città); // Roma
