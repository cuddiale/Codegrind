// Unire due Set in un unico Set.

const set1 = new Set([1, 2, 3]);
const set2 = new Set([3, 4, 5]);

const unione = new Set([...set1, ...set2]);

console.log(unione); // Set { 1, 2, 3, 4, 5 }
