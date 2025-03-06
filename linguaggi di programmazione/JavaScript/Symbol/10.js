// Utilizzare `Symbol.isConcatSpreadable` per controllare se un oggetto deve essere espanso durante la concatenazione degli array.

const arrayLike = {
  length: 2,
  0: "a",
  1: "b",
  [Symbol.isConcatSpreadable]: true,
};
const result = ["start"].concat(arrayLike, "end");

console.log(result); // ['start', 'a', 'b', 'end']
