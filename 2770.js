var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function inverter(dimensoes) {
    var temp = dimensoes[0];
    dimensoes[0] = dimensoes[1];
    dimensoes[1] = temp;
}

var indice = 0;

while (lines.length > 0 && lines[indice].trim() !== "") {
    var [x, y, m] = lines[indice++].split(" ").map(Number);
    
    if (x < y) {
        var dimensoes = [x, y];
        inverter(dimensoes);
        x = dimensoes[0];
        y = dimensoes[1];
    }
    
    for (var i = 0; i < m; i++) {
        var [xi, yi] = lines[indice++].split(" ").map(Number);
        
        if (xi < yi) {
            var dimensoes_cliente = [xi, yi];
            inverter(dimensoes_cliente);
            xi = dimensoes_cliente[0];
            yi = dimensoes_cliente[1];
        }
        
        if (xi <= x && yi <= y)
            console.log("Sim");
        else
            console.log("Nao");
    }
}
