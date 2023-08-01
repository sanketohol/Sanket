function Summation(Arr : number[]) : number
{
    var Sum : number = 0;

    for(let i = 0; i < Arr.length; i++)
    {
        Sum = Sum + Arr[i];
    }

    return Sum;
}

var iArr : number[] = [23,6,7,4,5,7];

var Ret : number = 0;

Ret = Summation(iArr);

console.log("Addition is : "+Ret);
