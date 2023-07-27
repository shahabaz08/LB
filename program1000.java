///   Sorting   

// and interface  =pure abstaction

import java.util.*;

class Sorting{

    private int Arr[];
    public Sorting(int Size)
    {
        Arr=new int [Size];

    }
    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the elements:");

        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Elements of an array are:");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.print(Arr[i]+" ");
        }
    }
}


public class program1000
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of an array:");

        int iSize=sobj.nextInt();

        Sorting xobj=new Sorting(iSize);

        xobj.Accept();
        xobj.Display();
    }
}