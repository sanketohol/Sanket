class Circle
{
    Radius : number;
    PI : any;

    constructor(A : number)
    {
        console.log("Inside Cicle Constructor");
        this.Radius = A;
        this.PI = 3.14;
    }

    Area() : number
    {
        console.log("Inside Cicle class method");
        return (this.PI * this.Radius * this.Radius);
    }

}

class CircleX extends Circle
{
    
    Circumference() : number
    {
        console.log("Inside CicleX class method");
        return (2 * this.PI * this.Radius);
    }

}
var Obj1 = new CircleX(11);
var Obj2 = new CircleX(50);

var Ret : number = 0;

Ret = Obj1.Area();
console.log("Area of Obj1 : "+Ret);

Ret = Obj1.Circumference();
console.log("Circumference of Obj1 : "+Ret);

Ret = Obj2.Area();
console.log("Area of Obj1 : "+Ret);

Ret = Obj2.Circumference();
console.log("Circumference of Obj1 : "+Ret);