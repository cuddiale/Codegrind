// Gestire le risposte di errore con il codice di stato HTTP:

fetch("https://api.example.com/dati")
  .then((response) => {
    if (!response.ok) {
      throw new Error("Errore nella richiesta");
    }
    return response.json();
  })
  .then((data) => console.log(data))
  .catch((error) => console.log(error));
