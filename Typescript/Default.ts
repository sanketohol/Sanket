//Default Parameter
function Percentage(Marks : number, Outof : number = 500) : number  //Default parameter should be given at the end of the parameter list
{
    let Ans : number = 0;

    Ans = (Marks / Outof) * 100
    
    return Ans;
}

var Per : number = 0;

Per = Percentage(220,300);
console.log("Percentage is : "+Per);

Per = Percentage(220);
console.log("Percentage is : "+Per);