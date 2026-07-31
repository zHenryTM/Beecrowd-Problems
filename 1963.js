var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var numeros = lines.shift().trim().split(" ");
var a = parseFloat(numeros[0]);
var b = parseFloat(numeros[1]);
var c = (b - a) / a * 100;
console.log(c.toFixed(2) + "%");
