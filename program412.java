


import java.util.*;


class Digits{

   
    public boolean CheckArmstrong(int iNo)
    {
        int iDigitCount=0,iTemp=iNo;
        int iDigit=0,iPower=1,iSum=0;

        while(iTemp!=0)
        {
            iDigitCount++;
            iTemp=iTemp/10;

        }

        iTemp=iNo;
        while(iTemp!=0)
        {
            iDigit=iTemp%10;//calculate digit
        

            for(int iCnt=1;iCnt<=iDigitCount;iCnt++)//calculate power
            {
                iPower=iPower*iDigit;
            }
            iSum=iSum+iPower;
            iPower=1;  //////imp line
            iTemp=iTemp/10;
        }
        if(iSum==iNo)
        {
            return true;

        }
        else
        {
            return false;
        }
    }
    
}

public class program412{

    public static void main(String arg[])
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("Please enter the number :");
        int iNo=sobj.nextInt();
        
        Digits nobj=new Digits();

        boolean bRet=nobj.CheckArmstrong(iNo);

        if(bRet==true)
        {
            System.out.println(iNo+ " is a armstrong number ");

        }
        else
        {
            System.out.println(iNo+ "is not a armstrong number");
        }

    }

    
}

