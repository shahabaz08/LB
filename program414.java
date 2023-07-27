// accept n number from user reutrn addition of numbers

import java.util.*;
class ArrayX
{
    public int Arr[];  //length property is in java

    public ArrayX(int iSize)
    {
        Arr=new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Plese enter " +Arr.length+ "elements");

        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.println("Enter the number :"+(iCnt+1));
            Arr[iCnt]=sobj.nextInt();
        }

    }
    public void Display()
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
    public int Adiition()
    {
        int iSum=0;
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            iSum=iSum+Arr[iCnt];
        }
        return iSum;
    }

}
 class program414 {

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of array");
        int iSize=sobj.nextInt();
        MarvellousX obj=new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        int iRet=obj.Adiition();
        System.out.println("Addition of all elements is:" +iRet);

    }
    
}
