var input = require('fs').readFileSync('dev/stdin', 'utf8');
var lines = input.split('\n');

var n = parseFloat(lines.shift())

if(n <=400.00){
    var reajuste = parseFloat((n*0.15).toFixed(2))
    var s = n+reajuste
    console.log("Novo salario: "+s.toFixed(2))
    console.log("Reajuste ganho: " +reajuste.toFixed(2))
    console.log("Em percentual: 15 %")
}
else if(n<=800.00){
    var reajuste = parseFloat((n*0.12).toFixed(2))
    var s = n+reajuste
    console.log("Novo salario: "+s.toFixed(2))
    console.log("Reajuste ganho: " +reajuste.toFixed(2))
    console.log("Em percentual: 12 %")
}
else if(n<=1200.00){
    var reajuste = parseFloat((n*0.10).toFixed(2))
    var s = n+reajuste
    console.log("Novo salario: "+s.toFixed(2))
    console.log("Reajuste ganho: " +reajuste.toFixed(2))
    console.log("Em percentual: 10 %")
}
else if(n<=2000.00){
    var reajuste = parseFloat((n*0.07).toFixed(2))
    var s = n+reajuste
    console.log("Novo salario: "+s.toFixed(2))
    console.log("Reajuste ganho: " +reajuste.toFixed(2))
    console.log("Em percentual: 7 %")
}
else{
    var reajuste = parseFloat((n*0.04).toFixed(2))
    var s = n+reajuste
    console.log("Novo salario: "+s.toFixed(2))
    console.log("Reajuste ganho: " +reajuste.toFixed(2))
    console.log("Em percentual: 4 %")
}