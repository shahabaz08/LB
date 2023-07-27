//problems on n numbers

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
        void Function()
        {

            //logic
        }
};

 int main()
{
    int iLength=0;
    cout<<"enter number of elements :\n";
    cin>>iLength;
    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();
    

    obj.Function();

    return 0;
}
template
