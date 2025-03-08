// Creare un nuovo elemento `select` con opzioni `option`:

const nuovoSelect = document.createElement("select");
const opzioni = ["Opzione 1", "Opzione 2", "Opzione 3"];

opzioni.forEach(function (testoOpzione) {
  const nuovaOpzione = document.createElement("option");
  nuovaOpzione.textContent = testoOpzione;
  nuovoSelect.appendChild(nuovaOpzione);
});

document.body.appendChild(nuovoSelect);
