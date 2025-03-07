// Utilizzare il destructuring per estrarre i valori da un oggetto annidato.

const persona = {
  nome: "Mario",
  eta: 30,
  indirizzo: {
    città: "Roma",
    via: "Via Roma",
    numero: 10,
  },
};

// Destructuring di oggetto annidato
const {
  nome,
  indirizzo: { città, via, numero },
} = persona;

console.log(nome); // Mario
console.log(città); // Roma
console.log(via); // Via Roma
console.log(numero); // 10
