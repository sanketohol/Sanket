
var Week : number[] = [10,20,30,40,50]

var Sum : number = 0;
var Cnt : number = 0;

for(Cnt = 0; Cnt < Week.length; Cnt++)
{
    Sum = Sum + Week[Cnt];
}

console.log("Addition is : "+Sum)