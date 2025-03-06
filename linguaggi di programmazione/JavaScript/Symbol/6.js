// Creare un iteratore personalizzato utilizzando `Symbol.iterator`.

const iterableObj = {
  data: [1, 2, 3],
  [Symbol.iterator]: function () {
    let index = 0;
    const data = this.data;
    return {
      next: function () {
        if (index < data.length) {
          return { value: data[index++], done: false };
        } else {
          return { done: true };
        }
      },
    };
  },
};

for (let value of iterableObj) {
  console.log(value); // 1, 2, 3
}
