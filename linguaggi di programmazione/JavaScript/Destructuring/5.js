// Utilizzare il destructuring per estrarre i parametri di un oggetto passato a una funzione.

function stampaDettagli({ nome, eta, città }) {
  console.log(`Nome: ${nome}`);
  console.log(`Età: ${eta}`);
  console.log(`Città: ${città}`);
}

const persona = {
  nome: "Mario",
  eta: 30,
  città: "Roma",
};

stampaDettagli(persona);
// Nome: Mario
// Età: 30
// Città: Roma
