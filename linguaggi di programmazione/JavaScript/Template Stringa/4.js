// Scrivi un programma che utilizzi un template literal per creare una lista HTML con elementi dinamici e stampi il risultato sulla console.

const frutta = ["Mela", "Banana", "Arancia"];
let listaHTML = "<ul>";
for (let frutto of frutta) {
  listaHTML += `<li>${frutto}</li>`;
}
listaHTML += "</ul>";
console.log(listaHTML);
