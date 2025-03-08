// Creare una nuova tabella `table` con righe `tr` e colonne `td`:

const nuovaTabella = document.createElement("table");

for (let i = 0; i < 3; i++) {
  const nuovaRiga = document.createElement("tr");

  for (let j = 0; j < 3; j++) {
    const nuovaColonna = document.createElement("td");
    nuovaColonna.textContent = `Riga ${i + 1}, Colonna ${j + 1}`;
    nuovaRiga.appendChild(nuovaColonna);
  }

  nuovaTabella.appendChild(nuovaRiga);
}

document.body.appendChild(nuovaTabella);
