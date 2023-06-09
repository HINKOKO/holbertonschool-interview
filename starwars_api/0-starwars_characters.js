#!/usr/bin/node

const request = require('request');
const filmNum = process.argv[2];

function printChars (chars, i) {
  if (i !== chars.length) {
    request(chars[i], function (err, _res, body) {
      if (err) console.log(err);
      else {
        console.log(JSON.parse(body).name);
        printChars(chars, ++i);
      }
    });
  }
}

request.get(`https://swapi-api.hbtn.io/api/films/${filmNum}`, function (err, _res, body) {
  if (err) console.log(err);
  else {
    const chars = JSON.parse(body).characters;
    printChars(chars, 0);
  }
});
