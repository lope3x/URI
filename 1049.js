var input = require('fs').readFileSync('dev/stdin', 'utf8');
var lines = input.split('\n');

var str1 = lines.shift()
var str2 = lines.shift()
var str3 = lines.shift()



if(str1.localeCompare("vertebrado")===0){
    if(str2.localeCompare("ave")===0){
        if(str3.localeCompare("carnivoro")===0){
            console.log("aguia")
        }
        else{
            console.log("pomba")
        }
    }
    else{
        if(str3.localeCompare("onivoro")===0){
            console.log("homem")
        }
        else{
            console.log("vaca")
        }
    }
}
else{
    if(str2.localeCompare("inseto")===0){
        if(str3.localeCompare("hematofago")===0){
            console.log("pulga")
        }
        else{
            console.log("lagarta")
        }
    }
    else{
        if(str3.localeCompare("hematofago")===0){
            console.log("sanguessuga")
        }
        else{
            console.log("minhoca")
        }
    }
}