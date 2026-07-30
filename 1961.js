var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var entrada = lines.shift().trim().split(" ");
var altura_pulo = Number(entrada[0]);
var canos = Number(entrada[1]);
var altura_canos = lines.shift().trim().split(" ");
var gameover = false;

for (var i = 0; i < altura_canos.length - 1; i++) {
    var cano_atual = Number(altura_canos[i]);
    var proximo_cano = Number(altura_canos[i + 1]);
    
    if (Math.abs(proximo_cano - cano_atual) > altura_pulo) {
        gameover = true;
        break;
    }
}

if (!gameover) {
    console.log("YOU WIN");
} else {
    console.log("GAME OVER");
}
