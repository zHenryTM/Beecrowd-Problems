// Em minha defesa, eu não sei JavaScript, apenas conheço a lógica de programação e a sintaxe básica de JS. Em C e em Python, esse problema foi fácil demais, mas aqui eu tive que quebrar a cabeça.
// Eu odeio JavaScript com todas as minhas forças!

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

// Variáveis
var numero = lines.shift().trim();
var novo_numero = "";
var sinal;
var sinal_expoente;
var index_ponto = 2;
var index_ultimo_numero;
var index_expoente;
var expoente = "";
var tem_negativo;

// Código
if (numero[0] != "-")
    sinal = "+";
else {
    tem_negativo = true;
    sinal = "-";
}
numero = Number(numero);
numero = numero.toExponential(4).toUpperCase();  // Retorna string
if (sinal === "+")
    numero = sinal + numero;
else if (tem_negativo && numero[0] != "-")
    numero = sinal + numero;
for (index_ultimo_numero = index_ponto + 1; index_ultimo_numero < 7; index_ultimo_numero++)
    if (numero[index_ultimo_numero] === "E")
        break;
index_ultimo_numero -= 1;
for (var i = 0; i <= index_ultimo_numero; i++)
    novo_numero += numero[i];
if (index_ultimo_numero < 6) 
    for (var i = index_ultimo_numero + 1; i < 7; i++) 
        novo_numero += "0";
novo_numero += "E";
for (var i = 3; i < numero.length; i++) 
    if (numero[i] === "E") {
        sinal_expoente = numero[i + 1];
        index_expoente = i + 2;
        break;
    }
novo_numero += sinal_expoente;
for (var i = index_expoente; i < numero.length; i++)
    expoente += numero[i];
if (expoente.length < 2)
    expoente = "0" + expoente;
novo_numero += expoente;
    
// Saída principal
console.log(novo_numero);
