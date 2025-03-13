// Gestire un'eccezione e poi rilanciarla per una gestione successiva.

function processaDato(dato) {
  try {
    if (dato < 0) {
      throw new Error("Dato negativo non permesso");
    }
    console.log("Dato processato:", dato);
  } catch (e) {
    console.error("Errore in processaDato:", e.message);
    throw e; // Rilancia l'eccezione
  }
}

function esegui() {
  try {
    processaDato(-1);
  } catch (e) {
    console.error("Errore in esegui:", e.message);
  }
}

esegui(); // Errore in processaDato: Dato negativo non permesso Errore in esegui: Dato negativo non permesso
