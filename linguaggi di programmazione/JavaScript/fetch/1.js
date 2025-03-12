// Eseguire una richiesta GET e ottenere i dati da un'API.

fetch("https://dog.ceo/api/breeds/list/all")
  .then((response) => response.json())
  .then((data) => console.log(data))
  .catch((error) => console.log("Errore nella richiesta", error));
