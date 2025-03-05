// Conta il numero di proprietà presenti nell'oggetto "persona" e stampa il conteggio in console.

const persona = {
  nome: "Mario",
  eta: 30,
  sesso: "Maschio",
};

const conteggioProprieta = Object.keys(persona).length;

console.log("Numero di proprietà:", conteggioProprieta);
