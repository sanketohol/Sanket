function MaxNumArr(Arr : number[]) : number
{
    let Max = Arr[0];

    for(let i = 0; i < Arr.length; i++)
    {
        if(Arr[i] > Max)
        {            
            Max = Arr[i];
        }
    }
    return Max;
}

var iArr : number[] = [23,89,6,29,56,45,77,32];
var Ret : number = 0;

Ret = MaxNumArr(iArr);

console.log("The maximum Number is :"+Ret);