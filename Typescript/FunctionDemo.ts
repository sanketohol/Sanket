
//Positional Parameters
function Display(No1 : number, No2 : number) : void     //if function is not returning anything then use void
{
    console.log("Value of No1 is : "+No1);
    console.log("Value of No2 is : "+No2);
}

console.log("First line of application : ");

var A : number = 11;
var B : number = 10;

Display(A,B);



function Multiplication(A : number, B : number, C : number) : number
{
    let Ans : number = 0;

    Ans = A * B * C;

    return Ans;
}

var No1 : number = 10;
var No2 : number = 20;
var No3 : number = 30;

var Ret : number = 0;

Ret = Multiplication(No1,No2,No3)

console.log("Multiplication is : "+Ret);