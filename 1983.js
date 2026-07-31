var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var alunos = Number(lines.shift().trim());
var melhor_nota;
var matricula_melhor_nota;
var i = 0;

while (i < alunos) {
    var entrada = lines[i].split(" ");
    var matricula = entrada[0];
    var nota = parseFloat(entrada[1]);
    
    if (i === 0 || nota > melhor_nota) {
        melhor_nota = nota;
        matricula_melhor_nota = matricula;
    }
    
    i++;
}

if (melhor_nota < 8) {
    console.log("Minimum note not reached");
} else {
    console.log(matricula_melhor_nota);
}
