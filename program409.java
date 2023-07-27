// diaplay common factors of that number 

//accept number and display factors
//decreased time complexity

import java.util.*;


class numbers{
      public void CommonFactorsDisplay(int iNo1,int iNo2)
      {
          int iCnt=0;
          System.out.println("Common elements are:");
          for(iCnt=1;iCnt<=iNo1/2 && iCnt<=iNo2/2;iCnt++)
          {
            if(iNo1%iCnt==0 && iNo2%iCnt==0)
            {
                System.out.println(iCnt);
            }

          }
       }
}

public class program409 {

    public static void main(String arg[])
    {
        Scanner sobj =new Scanner(System.in);

        System.out.println("Please enter the number :");
        int iNo1=sobj.nextInt();
        
        System.out.println("Please enter the number :");
        int iNo2=sobj.nextInt();
        
        numbers nobj=new numbers();
        nobj.CommonFactorsDisplay(iNo1,iNo2);

    }

    
}
