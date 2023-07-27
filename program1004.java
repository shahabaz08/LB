
///DS implementation using java
//singly linear linked list in java

import java.util.*;

import javax.lang.model.util.ElementScanner6;
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
    private Node Head;
    private int Count;

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
        else
        {
            Node temp=Head;
            while(temp.Next!=null)
            {
                temp=temp.Next;
            }
            temp.Next=newn;
        }
        this.Count++;
    
    }
    public void DeleteFirst()
    {
        if(Head==null)
        {
            System.out.println("Linked list is empty");
            return;
        }
        else if(this.Count==1)
        {
            this.Head=null;
        }
        else
        {
            this.Head=Head.Next;
        }
        this.Count--;
    }
    public void DeleteLast()
    {
        if(Head==null)
        {
            System.out.println("Linked list is Empty");
            return;
        }
        else if(this.Count==1)
        {
            this.Head=null;
        }
        else
        {
            Node temp=Head;
            while(temp.Next.Next!=null)
            {
                temp=temp.Next;
            }
            temp.Next=null;
        }
        this.Count--;
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
    public int CountNodes()
    {
        return this.Count;
    }
    public void InsertAtPosition(int pos,int No)
    {
        if(pos<1 || pos >this.Count+1)
        {
            System.out.println("Invalic Position");
            return ;
        }
        if(pos==1)
        {
            InsertFirst(No);
        }
        else if(pos==this.Count+1)
        {
            InsertLast(No);
        }
        else
        {
            Node newn=new Node(No);
            Node temp=Head;
            for(int i=1;i<pos-1 ;i++)
            {
                temp=temp.Next;
            }
            newn.Next=temp.Next;
            temp.Next=newn;
            this.Count++;
        }
    }

    public void DeleteAtPosition(int pos)
    {
        if(pos<1 || pos >this.Count+1)
        {
            System.out.println("Invalic Position");
            return ;
        }
        if(pos==1)
        {
            DeleteFirst();
        }
        else if(pos==this.Count)
        {
            DeleteLast();
        }
        else
        {
            Node temp=Head;
            for(int i=1;i<pos-1 ;i++)
            {
                temp=temp.Next;
            }
            temp.Next=temp.Next.Next;
            this.Count--;
        }
    }
    
}
public class program1004
 {
    public static void main(String arg[])
    {
        SinglyLL obj=new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        obj.InsertLast(101);
        obj.InsertAtPosition(4, 400);
        obj.DeleteAtPosition(4);
        obj.Display();
        int ret=obj.CountNodes();
        System.out.println("Number of nodes are:"+ret);
    }
    
}
