
class AbstractDemo
{
    public static void main(String Arg[])
    {
        //RBI robj = new RBI();         NA because abstract class does not allow to create object of abstract function
        SBI sobj = new SBI(); // No Casting
        BOM bobj = new BOM(); // No Casting

        // RBI robj1 = new SBI();  Up Casting Allowed
        // RBI robj2 = new BOM();  Up Casting Allowed

        sobj.DisplayRules();
        bobj.DisplayRules();

        float fRet = 0.0f;
        fRet = sobj.CalculateROI();
        System.out.println("ROI of SBI is : "+fRet);

        fRet = bobj.CalculateROI();
        System.out.println("ROI of BOM is : "+fRet);
    }
}

abstract class RBI
{
    public abstract float CalculateROI();
    //virtual float CalculateROI() = 0;
    public void DisplayRules()
    {
        System.out.println("You have to submit Aadhar card and PAN card");
        System.out.println("Minimum Balance is 10,000");
    }
}

class SBI extends RBI
{
    public float CalculateROI()
    {
       return 5.7f;
    }
}

class BOM extends RBI
{
  public float CalculateROI()
  {
    return 7.7f;
  }
}