// Utilizzare `try`, `catch` e `finally` per gestire un'eccezione e garantire l'esecuzione di un blocco di codice finale.

function leggiFile(file) {
  try {
    // Simula la lettura di un file
    if (file === "") {
      throw new Error("File non trovato");
    }
    console.log("Contenuto del file: ...");
  } catch (e) {
    console.error(e.message);
  } finally {
    console.log("Operazione di lettura terminata");
  }
}

leggiFile("documento.txt"); // Contenuto del file: ... Operazione di lettura terminata
leggiFile(""); // File non trovato Operazione di lettura terminata
