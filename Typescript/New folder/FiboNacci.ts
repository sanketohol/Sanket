function FiboNacci(No1 : number) : number[]
{
    const Arr = [0, 1];
    let i = 2;
    while (Arr[i -1] + Arr[i -2] <= No1)
    {
        Arr[i] = Arr[i -1] + Arr[i -2];
        i++;
    }

    return Arr;
}

var Num : number = 21;
var Ret : number[];
Ret = FiboNacci(Num);

console.log("The Series is : "+Ret);