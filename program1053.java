
// for each loop in java
import java.util.*;


public class program1053 {
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String :");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();

        System.out.println(Arr.length);
        System.out.println(str.length());
        int Count=0,i=0;
        while(i<Arr.length)
        {
            if((Arr[i]>='a')&&(Arr[i]<='z'))
            {
                 Count++;
            }
        }

        System.out.println("Small Char Are:"+Count);
    }

    
}
