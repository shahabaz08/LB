//  split and trim - removes start and end spaces




import java.util.*;


public class program1055 {
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String :");
        String str=sobj.nextLine();
        String newstr=str.trim();

        String Arr[]=newstr.split(" ");

        System.out.println("Number of Words are :"+Arr.length);
    }   
}
