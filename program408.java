//accept number and display factors
//decreased time complexity

import java.util.*;


class numbers{
      public void EvenFactorsDisplay(int iNo)
      {
        int iCnt=0;
        for(iCnt=2;iCnt<=(iNo/2);iCnt+=2)//iCnt=iCnt+2
        {
            if(iNo%iCnt==0)
            {
                    System.out.println("Even Factor is :"+iCnt);
                
            }
        }

      }
}

public class program408 {

    public static void main(String arg[])
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("Please enter the number :");
        int iNo=sobj.nextInt();
        
        numbers nobj=new numbers();
        nobj.EvenFactorsDisplay(iNo);

    }

    
}
