var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var unidades = ["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"];
var dezenas = ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"];
var centenas = ["", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"];

var numero = Number(lines.shift().trim());

var centena = parseInt(numero / 100);

numero = parseInt(numero % 100);

var dezena = parseInt(numero / 10);

numero = parseInt(numero % 10);

var unidade = numero;

console.log(centenas[centena] + dezenas[dezena] + unidades[unidade]);
