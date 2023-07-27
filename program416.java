// accept n numbers reverse the array not only display i.e. swap
//

import java.util.*;
class ArrayX
{
    protected int Arr[];  //length property is in java

    public ArrayX(int iSize)
    {
        Arr=new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Plese enter " +Arr.length+ "elements");

        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.println("Enter the number :"+(iCnt+1));
            Arr[iCnt]=sobj.nextInt();
        }

    }
    protected void Display()
    {
        System.out.println("Elements of array are:");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");

        }
        System.out.println();
    }
    
}
class MarvellousX extends ArrayX 
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }
    public void Reverse()
    {
        int iStart=0;
        int iEnd=Arr.length-1;

        int iTemp=0;

        while (iStart<iEnd)
        {
            iTemp=Arr[iStart];
            Arr[iStart]=Arr[iEnd];
            Arr[iEnd]=iTemp;
            iStart++;
            iEnd--;

        }
    }
}
 class program416 {

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of array");
        int iSize=sobj.nextInt();
        MarvellousX obj=new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        obj.Reverse();
        System.out.println("Array after reverse:");
        obj.Display();

    }
    
}
