/// * * * * using loop

void DisplayR()
{
    static int iCnt=1;  /// Static storage class

    if(iCnt<=4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();    //Recursive call
    }
}

int main()
{
    printf("Inside main\n");

    DisplayR();

    printf("End of main\n");

    return 0;
}
// if iCnt is not declared as static it goes
//uncontrolled recursion

// segmentation fault says=>recurson runs on stack
// if statck memory is fulled ie goes is seg.fault
