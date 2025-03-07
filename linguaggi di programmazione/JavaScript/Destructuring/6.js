// Utilizzare il destructuring per estrarre i valori di un oggetto con valori predefiniti per le variabili.

const persona = {
  nome: "Mario",
  città: "Roma",
};

// Destructuring con valori predefiniti
const { nome, eta = 25, città } = persona;

console.log(nome); // Mario
console.log(eta); // 25 (valore predefinito)
console.log(città); // Roma
