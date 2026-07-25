var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function quicksort(n, inicio, fim) {
    if (inicio >= fim) {
        return;   
    } 
    
    let i, j, pivo = n[fim];
    
    for (i = inicio - 1, j = inicio; j <= fim; j++) {
        if (n[j] < pivo || j === fim) {
            let temp = n[j];
            i++;
            n[j] = n[i];
            n[i] = temp;
        }
    }
    
    quicksort(n, 0, i - 1);
    quicksort(n, i + 1, fim);
}

function main() {
    n = lines.shift().split(" ");
    
    for (let i = 0; i < 4; i++) {
        n[i] = Number(n[i]);
    }
    
    quicksort(n, 0, 3);
    
    if (n[0] + n[1] > n[2] || n[1] + n[2] > n[3]) {
        console.log("S");
    } else {
        console.log("N");
    }
}

main();
