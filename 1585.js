var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var casos_teste = Number(lines.shift());

for (var i = 0; i < casos_teste; i++) {
    var entrada = lines.shift().split(" ");
    var x = Number(entrada[0]);
    var y = (entrada[1]);
    var area = parseInt((x * y) / 2);
    
    console.log("" + area + " cm2");
}
