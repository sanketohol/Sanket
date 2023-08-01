function ChkPrime(No1 : number) : boolean
{
    var i= 0;

    if(No1 <= 1)
    {
        return false;
    }

    for(i = 2; i < No1; i++)
    {
        if(No1 % i === 0)
        {
            return false;
        }
    }

    return true;
}

var Num : number = 11;

var Ret : boolean
Ret = ChkPrime(Num);

console.log("The number is prime :"+Ret)
