// Creare una classe "Persona" con metodo "saluta". Successivamente, creare una classe "Studente" che erediti dalla classe "Persona" e sovrascriva il metodo "saluta" per aggiungere il corso di studi nel saluto.

class Persona {
  saluta() {
    console.log("Ciao!");
  }
}

class Studente extends Persona {
  constructor(nome, corsoDiStudi) {
    super();
    this.nome = nome;
    this.corsoDiStudi = corsoDiStudi;
  }

  saluta() {
    console.log(`Ciao! Sono ${this.nome} e studio ${this.corsoDiStudi}.`);
  }
}

const studente = new Studente("Mario", "Informatica");
studente.saluta();
