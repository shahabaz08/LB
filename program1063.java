//  convert Capital to small string

// logic Typecast

import java.util.*;


public class program1063
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String :");
        String str=sobj.nextLine();

        String Arr[]=str.split(" ");

        HashMap<String,Integer> hobj=new HashMap();
        int Frequency=0;
        for( String ch:Arr)
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
        System.out.println(hobj);
        Set<String> setobj=hobj.keySet();
        int iMax=0;
        String CMax=" ";


        for(String value:setobj)
        {
            if(iMax <hobj.get(value))
            {
                iMax=hobj.get(value);
                CMax=value;

            }
        }
        System.out.println("Maximum times occured word is :"+CMax +" with freaquency "+iMax);
        
        
    }   
}
