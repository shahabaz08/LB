//return the adiition of odd numbers and even numbers
//destructor

#include<iostream>
using namespace std;
class ArrayX
{
    public:
        int *Arr;    //Arr[]
        int iSize;

        ArrayX(int i)
        {
            iSize=i;
            Arr=new int(iSize);
        }
        ~ArrayX()
        {
            delete[]Arr;
        }
        void Accept()
        {
            cout<<"please enter the numebres:"<<"\n";
            int iCnt=1;

            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
          void Display()
        {
            cout<<"elementes of array are:"<<"\n";
            int iCnt=1;

            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";

            }
            cout<<"\n";
        }
        int SumEven()
        {
            int iSum=0;
            int iCnt=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                if((Arr[iCnt]%2)==0)
                {
                    iSum=iSum+Arr[iCnt];
                }
            }
            return iSum;
        }
        int SumOdd()
        {
            int iSum=0;
            int iCnt=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                if((Arr[iCnt]%2)!=0)
                {
                    iSum=iSum+Arr[iCnt];
                }
            }
            return iSum;
        }
};

 int main()
{
    int iLength=0,iRet=0;
    cout<<"enter number of elements :\n";
    cin>>iLength;
    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();
    
    iRet=obj.SumEven();

    cout<<"addition is of even :\n"<<iRet<<"\n";
     iRet=obj.SumOdd();

    cout<<"addition is of odd :\n"<<iRet<<"\n";

    return 0;
}
