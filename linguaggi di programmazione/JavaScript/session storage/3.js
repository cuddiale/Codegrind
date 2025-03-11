// Rimuovere un valore dal Session Storage.

sessionStorage.setItem("chiave", "valore");
sessionStorage.removeItem("chiave");
console.log(sessionStorage.getItem("chiave")); // null
