// Ottenere l'elemento precedente di un elemento e rimuovergli una classe.

const elementoCorrente = document.getElementById("elementoCorrente");
const elementoPrecedente = elementoCorrente.previousElementSibling;
elementoPrecedente.classList.remove("miaClasse");
