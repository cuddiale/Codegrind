const select = document.getElementById("breeds");
const container = document.getElementById("container");

fetch("https://dog.ceo/api/breeds/list/all")
  .then((response) => response.json())
  .then((data) => {
    const obj = data.message;
    Object.keys(obj).forEach((key) => {
      if (obj[key].length == 0) {
        createOption(key);
      } else {
        obj[key].forEach((element) => {
          createOption(`${element} ${key}`);
        });
      }
    });
    caricaDati(select.value);
  });

select.addEventListener("change", (e) => {
  while (container.firstChild) {
    container.removeChild(container.firstChild);
  }
  console.log(e.target.value);
  caricaDati(e.target.value);
});

function createOption(value) {
  const option = document.createElement("option");
  option.value = value;
  option.appendChild(document.createTextNode(value));
  select.appendChild(option);
}

function caricaDati(breed) {
  if (breed == "") return;
  fetch(`https://dog.ceo/api/breed/${breed}/images`)
    .then((response) => response.json())
    .then((data) => {
      console.log(data);
      generaCard(data.message);
    });
}

function generaCard(photos) {
  photos.sort(() => Math.random() - 0.5);
  photos.forEach((photo) => {
    const card = document.createElement("div");
    card.className =
      "rounded-xl shadow-xl text-xl bg-white h-[200px] w-[200px] bg-cover";
    card.style.backgroundImage = `url(${photo})`;
    // card.style.background
    container.appendChild(card);
  });
}
