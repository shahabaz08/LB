//  remove duplicates 

import java.util.*;


public class program1064
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String :");
        String str=sobj.nextLine();

        String Arr[]=str.split(" ");

        HashMap<String,Integer> hobj=new HashMap();
        int Frequency=0;

        String output="";

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
                ch=ch+" ";
                output =output + ch;
            }
        }
        System.out.println(hobj);
        Set<String> setobj=hobj.keySet();
        int iMax=0;
        String CMax=" ";


        System.out.println(output);
        
    }   
}
