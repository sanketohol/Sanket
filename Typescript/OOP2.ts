//Write an application which performs addition and substraction of 2 numbers

// Kaay Karaych ahe ? (Methods)   -> Addition & Substraction

// Te karayla kaay lagnar ahe ? (Data/Characteristics -> 2 numbers)

class Arithmatic
{
    No1 : number;
    No2 : number;

    constructor(A :  number, B : number,)
    {
        this.No1 = A;
        this.No2 = B;
    }

    Addition() : number
    {
        return this.No1+this.No2;

    }

    Substraction() : number
    {
        return this.No1-this.No2;
    }
}

var Obj1 = new Arithmatic(11,10);
var Obj2 = new Arithmatic(21,15);

var Ret : number = 0;

Ret = Obj1.Addition();
console.log("Addition of Obj1 : "+Ret);

Ret = Obj1.Substraction();
console.log("Substraction of Obj1 : "+Ret);

Ret = Obj2.Addition();
console.log("Addition of Obj2 : "+Ret);

Ret = Obj2.Substraction();
console.log("Substraction of Obj2 : "+Ret);