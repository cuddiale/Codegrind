// Creare una classe "Animale" con proprietà "nome" e un metodo "verso" che restituisca il verso dell'animale. Successivamente, creare una classe "Cane" che erediti dalla classe "Animale" e abbia una proprietà aggiuntiva "razza".

class Animale {
  constructor(nome) {
    this.nome = nome;
  }

  verso() {
    return "Sconosciuto";
  }
}

class Cane extends Animale {
  constructor(nome, razza) {
    super(nome);
    this.razza = razza;
  }

  verso() {
    return "Bau Bau!";
  }
}

const cane = new Cane("Fido", "Labrador");
console.log(cane.nome, cane.razza);
console.log(cane.verso());
