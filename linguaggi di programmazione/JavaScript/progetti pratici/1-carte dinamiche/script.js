const arr = [
  {
    url: "urlImmagine...",
    titolo: "Card Titolo 1",
    descrizione:
      "Lorem ipsum dolor sit amet pretium consectetur adipiscing elit. Lorem consectetur adipiscing elit.",
  },
  {
    url: "urlImmagine...",
    titolo: "Card Titolo 2",
    descrizione:
      "Lorem ipsum dolor sit amet pretium consectetur adipiscing elit. Lorem consectetur adipiscing elit.",
  },
  {
    url: "urlImmagine...",
    titolo: "Card Titolo 3",
    descrizione:
      "Lorem ipsum dolor sit amet pretium consectetur adipiscing elit. Lorem consectetur adipiscing elit.",
  },
];

arr.forEach((data) => {
  creaCard(data);
});
function creaCard(data) {
  const card = document.createElement("div");
  card.className = "w-full md:w-1/2 xl:w-1/3 px-4";

  const innerDiv = document.createElement("div");
  innerDiv.className = "bg-white rounded-lg overflow-hidden mb-10 shadow-xl";
  card.appendChild(innerDiv);

  const immagine = document.createElement("img");
  immagine.src = data.url;
  immagine.className = "w-full";
  innerDiv.appendChild(immagine);

  const textContainer = document.createElement("div");
  textContainer.className = "p-8 sm:p-9 md:p-7 xl:p-9 text-center";
  innerDiv.appendChild(textContainer);

  const titolo = document.createElement("h3");
  titolo.className = "font-semibold text-dark text-xl";
  titolo.appendChild(document.createTextNode(data.titolo));
  textContainer.appendChild(titolo);

  const descrizione = document.createElement("p");
  descrizione.className = "text-base text-body-color leading-relaxed mb-7";
  descrizione.appendChild(document.createTextNode(data.descrizione));
  textContainer.appendChild(descrizione);

  document.getElementById("container").appendChild(card);
}
