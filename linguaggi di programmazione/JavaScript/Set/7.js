// Creare l'intersezione di due Set.

const set1 = new Set([1, 2, 3]);
const set2 = new Set([2, 3, 4]);

const intersezione = new Set([...set1].filter((x) => set2.has(x)));

console.log(intersezione); // Set { 2, 3 }
