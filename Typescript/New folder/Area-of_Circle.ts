function Area(No1 : number) : number
{
    var Ans1 = 0;
    var PI : number = 3.14;
    
    Ans1 = PI * No1 * No1;

    return Ans1;
}


var Rad : number = 5;
var Ans : number = 0;

Ans = Area(Rad);

console.log("Area of Circle is : "+Ans);