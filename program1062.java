//  convert Capital to small string

// logic Typecast

import java.util.*;


public class program1062
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String :");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();

        HashMap<Character,Integer> hobj=new HashMap();
        int Frequency=0;

        for(char ch:Arr)
        {
            if(hobj.containsKey(ch))
            {
                Frequency=hobj.get(ch);
                hobj.put(ch,Frequency+1);
            }
            else
            {
                hobj.put(ch,1);
            }
        }
        Set<Character> setobj=hobj.keySet();
        int iMax=0;
        char CMax=' ';


        for(char value:setobj)
        {
            if(iMax <hobj.get(value))
            {
                iMax=hobj.get(value);
                CMax=value;

            }
        }
        System.out.println("Maximum times occured char is :"+CMax +" with freaquency "+iMax);
        
    }   
}
