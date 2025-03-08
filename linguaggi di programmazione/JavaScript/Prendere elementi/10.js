// Ottenere tutti gli elementi figli di un elemento padre e aggiungere loro una classe.

const elementoPadre = document.getElementById("elementoPadre");
const elementiFigli = elementoPadre.children;
for (let i = 0; i < elementiFigli.length; i++) {
  elementiFigli[i].classList.add("miaClasse");
}
