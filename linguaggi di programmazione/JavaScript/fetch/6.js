// Gestire i parametri di query nella richiesta GET:

const parametro1 = "valore1";
const parametro2 = "valore2";

fetch(
  `https://api.example.com/dati?parametro1=${parametro1}&parametro2=${parametro2}`
)
  .then((response) => response.json())
  .then((data) => console.log(data))
  .catch((error) => console.log("Errore nella richiesta", error));
