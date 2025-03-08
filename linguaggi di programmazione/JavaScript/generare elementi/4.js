// Creare un nuovo elemento `ul` e aggiungere una lista di elementi `li` ad esso:

const nuovaLista = document.createElement("ul");
const elementiLista = ["Elemento 1", "Elemento 2", "Elemento 3"];

elementiLista.forEach(function (testoElemento) {
  const nuovoElemento = document.createElement("li");
  nuovoElemento.textContent = testoElemento;
  nuovaLista.appendChild(nuovoElemento);
});

document.body.appendChild(nuovaLista);
