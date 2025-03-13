// Utilizzare le eccezioni per validare l'input di una funzione.

function validaInput(nome, eta) {
  try {
    if (typeof nome !== "string" || nome.length === 0) {
      throw new Error("Nome non valido");
    }
    if (typeof eta !== "number" || eta <= 0) {
      throw new Error("Età non valida");
    }
    console.log(`Nome: ${nome}, Età: ${eta}`);
  } catch (e) {
    console.error(e.message);
  }
}

validaInput("Mario", 30); // Nome: Mario, Età: 30
validaInput("", 30); // Nome non valido
validaInput("Mario", -5); // Età non valida
