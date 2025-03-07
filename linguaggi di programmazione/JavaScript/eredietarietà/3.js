// Creare una classe "Persona" con proprietà "nome" e "cognome". Successivamente, creare una classe "Studente" che erediti dalla classe "Persona" e abbia una proprietà aggiuntiva "corsoDiStudi".

class Persona {
  constructor(nome, cognome) {
    this.nome = nome;
    this.cognome = cognome;
  }
}

class Studente extends Persona {
  constructor(nome, cognome, corsoDiStudi) {
    super(nome, cognome);
    this.corsoDiStudi = corsoDiStudi;
  }
}

const studente = new Studente("Mario", "Rossi", "Informatica");
console.log(studente.nome, studente.cognome, studente.corsoDiStudi);
