import java.util.*;

class ArrayFor
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of Array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        Arr[0] = sobj.nextInt();
        Arr[1] = sobj.nextInt();
        Arr[2] = sobj.nextInt();
        Arr[3] = sobj.nextInt();
        
        System.out.println("output is : "+Arr[0]);
        System.out.println("output is : "+Arr[1]);
        System.out.println("output is : "+Arr[2]);
        System.out.println("output is : "+Arr[3]);
    }
}