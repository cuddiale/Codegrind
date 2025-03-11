// Salvare più valori nel Session Storage e recuperarli.

sessionStorage.setItem("nome", "Alice");
sessionStorage.setItem("età", "25");
const nome = sessionStorage.getItem("nome");
const età = sessionStorage.getItem("età");
console.log(nome); // 'Alice'
console.log(età); // '25'
