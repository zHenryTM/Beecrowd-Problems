var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var casos_teste = Number(lines.shift().trim());
for (var i = 0; i < casos_teste; i++) {
    var jogadores = lines.shift().trim().split(" ");
    var numeros = lines.shift().trim().split(" ");
    var soma = Number(numeros[0]) + Number(numeros[1]);
    var resultado, vencedor;
    resultado = (soma % 2 === 0) ? "PAR" : "IMPAR" ;
    vencedor = (jogadores[1] === resultado) ? jogadores[0] : jogadores[2] ;
    console.log(vencedor);
}
