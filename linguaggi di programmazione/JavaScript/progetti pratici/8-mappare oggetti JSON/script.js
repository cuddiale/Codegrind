// const data = {
//   users: {
//     wqiu237uh390fvx: {
//       firstname: "luca",
//       lastname: "rossi",
//     },
//     ksxz993ql617oer: {
//       firstname: "marco",
//       lastname: "verdi",
//     },
//   },
// };

// const data = [
//   { id: "wqiu237uh390fvx", firstname: "luca", lastname: "rossi" },
//   { id: "ksxz993ql617oer", firstname: "marco", lastname: "verdi" },
// ];

const data = {
  users: {
    wqiu237uh390fvx: {
      firstname: "luca",
      lastname: "rossi",
    },
    ksxz993ql617oer: {
      firstname: "marco",
      lastname: "verdi",
    },
  },
};

const users = [];

for (let key of Object.keys(data.users)) {
  users.push({ id: key, ...data.users[key] });
}

console.log(users);
