// Creare una classe "Studente" con proprietà nome, cognome e un array di voti. Aggiungere un metodo "aggiungiVoto" alla classe "Studente" che permetta di aggiungere un voto all'array dei voti.

class Studente {
  constructor(nome, cognome) {
    this.nome = nome;
    this.cognome = cognome;
    this.voti = [];
  }

  aggiungiVoto(voto) {
    this.voti.push(voto);
  }
}

const studente = new Studente("Mario", "Rossi");
studente.aggiungiVoto(8);
studente.aggiungiVoto(7);
console.log("Voti:", studente.voti);
