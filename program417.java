// accept n numbers reverse the array not only display i.e. swap
//10 20 30 40 30 20 10 
// array is palindrome 

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
    boolean Checkpalindrome()
    {
        int iStart=0;
        int iEnd=Arr.length-1;
        boolean bflag=true;

        while (iStart<iEnd)
        {
            if(Arr[iStart]!=Arr[iEnd])
            {
                bflag=false;
            }
            iStart++;
            iEnd--;
        }
        return bflag;

    }

}
 class program417 {

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        boolean bRet=false;

        System.out.println("Enter the size of array");
        int iSize=sobj.nextInt();
        MarvellousX obj=new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        bRet=obj.Checkpalindrome();

        if(bRet==true)
        {
            System.out.println("Array is palindrome");
        }
        else
        {
            System.out.println("Array is not palindrome");
        }
        



    }
    
}
