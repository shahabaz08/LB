//Addition  //complete oop
import java.util.*;

class Arithmatic{
    public int iValue1;  //char
    public int iValue2;   //char

    public Arithmatic(int i,int j)//contructor
    {
        iValue1=i;
        iValue2=j;
    }
    public int Addition()
    {
        int iSum=0;
        iSum=iValue1+iValue2;
        return iSum;
    }
    
}
public class program405 {
    
  
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo1=0,iNo2=0,iAns=0;

        System.out.println("Enter First number :");
        iNo1=sobj.nextInt();

        System.out.println("Enter second number ");
        iNo2=sobj.nextInt();
        Arithmatic aobj=new Arithmatic(iNo1,iNo2);
        iAns=aobj.Addition();

        System.out.println("Addition is :"+iAns);


    }
    
}
