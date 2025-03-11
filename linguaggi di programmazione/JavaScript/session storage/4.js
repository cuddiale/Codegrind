// Salvare un oggetto come stringa JSON nel Session Storage.

const utente = { nome: "Alice", età: 25 };
sessionStorage.setItem("utente", JSON.stringify(utente));
console.log(sessionStorage.getItem("utente")); // '{"nome":"Alice","età":25}'
