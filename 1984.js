var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var numero = lines.shift().trim();
var tamanho_numero = numero.length - 1;
var string = "";

for (var i = tamanho_numero; i >= 0; i--) {
    string += numero[i];
}

console.log(string);
