// Rimuovere tutti i valori dal Session Storage.

sessionStorage.setItem("chiave1", "valore1");
sessionStorage.setItem("chiave2", "valore2");
sessionStorage.clear();
console.log(sessionStorage.getItem("chiave1")); // null
console.log(sessionStorage.getItem("chiave2")); // null
