// Gestire eccezioni annidate all'interno di più blocchi `try`.

function operazioneComplessa(dato) {
  try {
    try {
      if (dato === null) {
        throw new Error("Dato nullo non permesso");
      }
      console.log("Dato processato:", dato);
    } catch (e) {
      console.error("Errore interno:", e.message);
      throw new Error("Errore nel processo interno");
    }
  } catch (e) {
    console.error("Errore esterno:", e.message);
  }
}

operazioneComplessa(null); // Errore interno: Dato nullo non permesso Errore esterno: Errore nel processo interno
operazioneComplessa(42); // Dato processato: 42
