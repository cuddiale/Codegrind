class Tabella {
  nomiColonne;
  data;

  constructor(nomiColonne, data) {
    this.nomiColonne = nomiColonne;
    this.data = data;
    this.generaTabella();
  }

  generaTabella() {
    const tabella = document.createElement("table");
    tabella.appendChild(this.generaColonne());
    tabella.appendChild(this.generaRighe());
    document.querySelector("body").appendChild(tabella);
  }

  generaColonne() {
    const thead = document.createElement("thead");
    this.nomiColonne.forEach((nomeColonna) => {
      const th = document.createElement("th");
      const text = document.createTextNode(nomeColonna);
      th.appendChild(text);
      thead.appendChild(th);
    });
    return thead;
  }
  generaRighe() {
    const tbody = document.createElement("tbody");
    this.data.forEach((riga) => {
      const tr = document.createElement("tr");
      Object.keys(riga).forEach((key) => {
        const cella = document.createElement("td");
        const text = document.createTextNode(riga[key]);
        cella.appendChild(text);
        tr.appendChild(cella);
      });
      tbody.appendChild(tr);
    });
    return tbody;
  }
}
const nomiColonne1 = [
  "id",
  "nome",
  "cognome",
  "email",
  "codice fiscale",
  "indirizzo",
];

const data1 = [
  {
    id: 1,
    nome: "luca",
    cognome: "rossi",
    email: "lucarossi@gmaail.it",
    codiceFiscale: "kdrwde32f93x109m",
    indirizzo: "via torino",
  },
  {
    id: 1,
    nome: "luca",
    cognome: "rossi",
    email: "lucarossi@gmaail.it",
    codiceFiscale: "kdrwde32f93x109m",
    indirizzo: "via torino",
  },
  {
    id: 1,
    nome: "luca",
    cognome: "rossi",
    email: "lucarossi@gmaail.it",
    codiceFiscale: "kdrwde32f93x109m",
    indirizzo: "via torino",
  },
  {
    id: 1,
    nome: "luca",
    cognome: "rossi",
    email: "lucarossi@gmaail.it",
    codiceFiscale: "kdrwde32f93x109m",
    indirizzo: "via torino",
  },
];
const nomiColonne2 = ["id", "prodotto", "prezzo"];
const data2 = [
  {
    id: 1,
    prodotto: "hamburger",
    prezzo: 3.99,
  },
  {
    id: 1,
    prodotto: "hamburger",
    prezzo: 3.99,
  },
  {
    id: 1,
    prodotto: "hamburger",
    prezzo: 3.99,
  },
];
const tabella1 = new Tabella(nomiColonne1, data1);
const tabella2 = new Tabella(nomiColonne2, data2);
