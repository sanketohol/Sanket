class Arithmetic
{
    Number1 : number;
    Number2 : number;

    constructor(A : number, B :number)
    {
        console.log("Inside Constructor");
        this.Number1 = A;
        this.Number2 = B;
    }

    Addition() : number
    {
        return (this.Number1+this.Number2);
    }
    
    Substraction() : number
    {
        return (this.Number1-this.Number2);
    }

    Multiplication() : number
    {
        return (this.Number1*this.Number2);
    }

    Division() : number
    {
        return (this.Number1/this.Number2);
    }

}
var Obj1 = new Arithmetic(11,10);
var Obj2 = new Arithmetic(21,15);

var Ret : number = 0;

Ret = Obj1.Addition();
console.log("Addition of Obj1 : "+Ret);

Ret = Obj1.Substraction();
console.log("Substraction of Obj1 : "+Ret);

Ret = Obj2.Addition();
console.log("Addition of Obj2 : "+Ret);

Ret = Obj2.Substraction();
console.log("Substraction of Obj2 : "+Ret);

Ret = Obj1.Multiplication();
console.log("Multiplication of Obj1 : "+Ret);

Ret = Obj1.Division();
console.log("Division of Obj1 : "+Ret);

Ret = Obj2.Multiplication();
console.log("Multiplication of Obj1 : "+Ret);

Ret = Obj2.Division();
console.log("Division of Obj1 : "+Ret);