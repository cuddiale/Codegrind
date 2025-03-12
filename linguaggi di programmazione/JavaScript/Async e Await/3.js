// Utilizzare Promise.all con async e await per eseguire più chiamate asincrone contemporaneamente:

async function ottieniDati() {
  const promessa1 = fetch("https://api.example.com/dati1");
  const promessa2 = fetch("https://api.example.com/dati2");
  const promessa3 = fetch("https://api.example.com/dati3");

  const [risultato1, risultato2, risultato3] = await Promise.all([
    promessa1,
    promessa2,
    promessa3,
  ]);

  const dati1 = await risultato1.json();
  const dati2 = await risultato2.json();
  const dati3 = await risultato3.json();

  console.log(dati1, dati2, dati3);
}

ottieniDati();
