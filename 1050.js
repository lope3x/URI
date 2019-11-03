var input = require('fs').readFileSync('dev/stdin', 'utf8');
var lines = input.split('\n');

var a  = new Array()

a[61] = "Brasilia"
a[71] = "Salvador"
a[11] = "Sao Paulo"
a[21] = "Rio de Janeiro"
a[32] = "Juiz de Fora"
a[19] = "Campinas"
a[27] = "Vitoria"
a[31] = "Belo Horizonte"

var n = parseInt(lines.shift())

if(a[n]!=undefined)
console.log(a[n])
else
console.log("DDD nao cadastrado")