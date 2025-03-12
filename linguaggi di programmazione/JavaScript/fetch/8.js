// Utilizzare async e await con fetch per semplificare la gestione delle risposte:

async function ottieniDati() {
  try {
    const response = await fetch("https://api.example.com/dati");
    if (!response.ok) {
      throw new Error("Errore nella richiesta");
    }
    const data = await response.json();
    console.log(data);
  } catch (error) {
    console.log(error);
  }
}

ottieniDati();
