// Utilizzare l'opzione headers per includere un bearer token di autenticazione nella richiesta:

const token = "abc123";

fetch("https://api.example.com/dati", {
  headers: {
    Authorization: `Bearer ${token}`,
  },
})
  .then((response) => response.json())
  .then((data) => console.log(data))
  .catch((error) => console.log("Errore nella richiesta", error));
