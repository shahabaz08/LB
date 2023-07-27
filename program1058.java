

import java.util.LinkedList;

import java.util.*;

class program1058
{
    public static void main(String arg[])
    {
        LinkedList <Integer> obj=new LinkedList();

        obj.add(11);
        obj.add(21);
        obj.add(51);
        obj.addLast(123);

        obj.remove(0);
       // obj.removeLast();

        System.out.println("Data is :"+obj);

        for(int no:obj)
        {
            System.out.println(no);
            
        }
    }
}