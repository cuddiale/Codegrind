// Ottenere il valore di un elemento radio selezionato.

const radios = document.getElementsByName("mioRadio");
let valoreSelezionato;
radios.forEach((radio) => {
  if (radio.checked) {
    valoreSelezionato = radio.value;
  }
});
console.log(valoreSelezionato);
