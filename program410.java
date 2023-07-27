// reture multi of factors

import java.util.*;


class numbers{
      public int MulFactorsDisplay(int iNo)
      {
        int iCnt=0;
        int iMult=1;
        for(iCnt=1;iCnt<=(iNo/2);iCnt++)//iCnt=iCnt+2
        {
            if(iNo%iCnt==0)
            {
                 iMult=iMult*iCnt;
                
            }
        }
        return iMult;

      }
}

public class program410{

    public static void main(String arg[])
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("Please enter the number :");
        int iNo=sobj.nextInt();
        
        numbers nobj=new numbers();
        int iRet=nobj.MulFactorsDisplay(iNo);
        System.out.println("Multiplication of "+ iNo +" is :"+iRet);

    }

    
}
