const data = [
  {
    id: 1,
    nome: "luca",
    cognome: "rossi",
    email: "luca.rossi@gmmaaaaailit",
    codiceFiscale: "kdrwde32f93x109m",
    indirizzo: "via torino",
  },
  {
    id: 2,
    nome: "marco",
    cognome: "verdi",
    email: "marco.verdi@gmmaaaaailit",
    codiceFiscale: "gbbfrw54f32x176p",
    indirizzo: "via piacenza",
  },
];

const table = document.getElementById("tabella");

data.forEach((element) => {
  const row = document.createElement("tr");

  Object.keys(element).forEach((key) => {
    const column = document.createElement("td");
    const text = document.createTextNode(element[key]);
    column.appendChild(text);
    row.appendChild(column);
  });

  table.appendChild(row);
});
