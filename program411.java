// reture multi of factors

import java.util.*;


class Digits{

    private int CountDigits(int iNo)
    {
        int iCnt=0;
        while(iNo!=0)
        {
            iCnt++;
            iNo=iNo/10;
            

        }
        return iCnt;
    }
    private int Power(int Base,int index) // base 4 index 5
    {
        int iAns=1;
        for(int iCnt=1;iCnt<=index;iCnt++)
        {
            iAns=iAns*Base;
        }
        return iAns;
    }
     public boolean CheckArmstrong(int iNo)
    {
        int iTemp=iNo,iSum=0,iDigit=0,iRet=0;
        int iCount=CountDigits(iNo);

        while(iNo!=0)
        {
            iDigit=iNo%10;
            iRet=Power(iDigit,iCount);
            iSum=iSum+iRet;
            iNo=iNo/10;
        }
        if(iSum==iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
}

public class program411{

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
