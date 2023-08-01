class Circle
{
    Radius : number;
    PI : any;

    constructor(A : number)
    {
        console.log("Inside Constructor");
        this.Radius = A;
        this.PI = 3.14;
    }

    Area() : number
    {
        return (this.PI * this.Radius * this.Radius);
    }

    Circumference() : number
    {
        return (2 * this.PI * this.Radius);
    }

}
var Obj1 = new Circle(11);
var Obj2 = new Circle(50);

var Ret : number = 0;

Ret = Obj1.Area();
console.log("Area of Obj1 : "+Ret);

Ret = Obj1.Circumference();
console.log("Circumference of Obj1 : "+Ret);

Ret = Obj2.Area();
console.log("Area of Obj1 : "+Ret);

Ret = Obj2.Circumference();
console.log("Circumference of Obj1 : "+Ret);