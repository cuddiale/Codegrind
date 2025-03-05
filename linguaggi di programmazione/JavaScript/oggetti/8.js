// Crea una copia dell'oggetto "persona" in un nuovo oggetto "personaCopia" e stampa entrambi gli oggetti in console.

const persona = {
  nome: "Mario",
  eta: 30,
};

const personaCopia = Object.assign({}, persona);

console.log("Persona originale:", persona);
console.log("Copia della persona:", personaCopia);
