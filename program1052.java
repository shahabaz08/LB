// Loop Editing
// for each loop in java
import java.util.*;


public class program1052 {
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String :");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();

        System.out.println(Arr.length);
        System.out.println(str.length());
        int Count=0;
        for(char Ch:Arr)
        {
            if((Ch>='a')&&(Ch<='z'))
            {
                 Count++;
            }
        }

        System.out.println("Small Char Are:"+Count);
    }

    
}
