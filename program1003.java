
///DS implementation using java
//singly linear linked list in java

import java.util.*;
class Node
{
    public int Data;
    public Node Next;

    public Node(int No)
    {
        this.Data=No;
        this.Next=null;
    }
}
class SinglyLL
{
    public Node Head;
    public int Count;

    public SinglyLL()
    {
        Head=null;
        Count=0;
    }

    protected void finalize()
    {
                // memory free
    }

    public void InsertFirst(int No)
    {
        Node newn=new Node(No);// newn.data=No;
                                // newn.Next=null;

        if(this.Head==null)
        {
            this.Head=newn;
        }
        else
        {
            newn.Next=this.Head;
            this.Head=newn;
        }     
        this.Count++;                   
    }
    public void InsertLast(int No)
    {
        Node newn=new Node(No);

        if(this.Head==null)
        {
            this.Head=newn;
        }
    
    }
    public void Display()
    {
        Node temp=Head;
        while(temp!= null)
        {
            System.out.print("| "+ temp.Data+" |->");
            temp=temp.Next;
        }
        System.out.println("NULL");
        
    }
    
}
public class program1003
 {
    public static void main(String arg[])
    {
        SinglyLL obj=new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        obj.Display();
    }
    
}
