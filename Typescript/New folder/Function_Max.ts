function Maximum(No1 : number,No2 : number,No3 : number) : number
{
    var Max = 0;

    if(No1>No2)
    {
        Max = No1;
    }
    else
    {
        Max = No2;
    }
    if(No3>Max)
    {
        Max = No3;
    }

    return Max;
}

var Num1 : number = 23;
var Num2 : number = 89;
var Num3 : number = 6;

var Ans : number = 0;

Ans = Maximum(Num1,Num2,Num3);

console.log("Maximum number is : "+Ans);