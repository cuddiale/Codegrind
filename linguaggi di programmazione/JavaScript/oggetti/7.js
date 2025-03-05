// Verifica se l'oggetto "persona" ha la proprietà "sesso" e stampa un messaggio appropriato in console.

const persona = {
  nome: "Mario",
  eta: 30,
};

if ("sesso" in persona) {
  console.log("La persona ha la proprietà 'sesso'.");
} else {
  console.log("La persona non ha la proprietà 'sesso'.");
}
