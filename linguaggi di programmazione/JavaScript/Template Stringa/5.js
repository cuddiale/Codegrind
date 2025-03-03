// Scrivi un programma che utilizzi un template literal per creare un messaggio email formattato con nome dinamico.

const nome = "Giovanni";
const messaggio = `
  Ciao ${nome},
  
  Benvenuto nel nostro sito!
  Speriamo che tu trovi tutto ciò di cui hai bisogno.
  
  Cordiali saluti,
  Il team di supporto
`;
console.log(messaggio);
