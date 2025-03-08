// Ottenere l'elemento successivo di un elemento e nasconderlo.

const elementoCorrente = document.getElementById("elementoCorrente");
const elementoSuccessivo = elementoCorrente.nextElementSibling;
elementoSuccessivo.style.display = "none";
