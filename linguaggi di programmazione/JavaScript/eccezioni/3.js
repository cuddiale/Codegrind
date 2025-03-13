// Creare e lanciare un'eccezione personalizzata per gestire un errore specifico.

class InvalidInputError extends Error {
  constructor(message) {
    super(message);
    this.name = "InvalidInputError";
  }
}

function validaInput(input) {
  try {
    if (typeof input !== "string") {
      throw new InvalidInputError("Input non valido: deve essere una stringa");
    }
    console.log("Input valido");
  } catch (e) {
    console.error(`${e.name}: ${e.message}`);
  }
}

validaInput("test"); // Input valido
validaInput(123); // InvalidInputError: Input non valido: deve essere una stringa
