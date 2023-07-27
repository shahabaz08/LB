//  convert Capital to small string

// logic Typecast

import java.util.*;


public class program1054 {
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String :");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();

        System.out.println(Arr.length);
        System.out.println(str.length());
        int Count=0;
        for(int i=0;i<Arr.length;i++)
        {
            if((Arr[i]>='A')&&(Arr[i]<='Z'))
            {
                 Arr[i]=(char)(Arr[i]+32);//typecast
            }
        }
        // convert char arr to str

        String Output=new String(Arr);
        System.out.println(Output);
        
    }   
}
