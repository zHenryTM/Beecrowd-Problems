var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function qtd_numeros_na_sequencia(N) {
    if (N <= 0) {
        return 1;
    }
    
    return qtd_numeros_na_sequencia(N - 1) + N;
}

function imprimir_sequencia(N) {
    var x = 1;
    var string = "0";
    
    while (x <= N) {
        for (var i = 0; i < x; i++) {
            string += " " + x;
        }
        
        x++;
    }
    
    console.log(string);
}

function main() {
    var caso = 1;
    
    while (lines.length > 0) {
        var linha_atual = lines.shift().trim();
        var N, qtd_numeros;
        
        if (!linha_atual) {
            break;
        }
        
        N = parseInt(linha_atual);
        qtd_numeros = qtd_numeros_na_sequencia(N - 1) + N;
        
        if (qtd_numeros == 1) {
            console.log("Caso " + caso + ": " + qtd_numeros + " numero");
        } else {
            console.log("Caso " + caso + ": " + qtd_numeros + " numeros");
        }
        
        imprimir_sequencia(N);
        
        console.log("");
        
        caso++;
    }
}

main();
