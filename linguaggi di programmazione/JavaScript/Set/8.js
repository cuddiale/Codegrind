// Creare la differenza di due Set.

const set1 = new Set([1, 2, 3]);
const set2 = new Set([2, 3, 4]);

const differenza = new Set([...set1].filter((x) => !set2.has(x)));

console.log(differenza); // Set { 1 }
