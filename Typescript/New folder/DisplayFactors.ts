function DisplayFactors(No1 : number) : void
{

    var i : number = 0;

    for(i=1; i <= No1; i++)
    {
        if(No1 % i == 0)
        {
            console.log(i);

        }
    }

}

DisplayFactors(24);