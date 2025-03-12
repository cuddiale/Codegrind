// Utilizzare l'opzione mode per specificare il tipo di richiesta CORS:

fetch("https://api.example.com/dati", {
  mode: "cors",
})
  .then((response) => response.json())
  .then((data) => console.log(data))
  .catch((error) => console.log("Errore nella richiesta", error));
