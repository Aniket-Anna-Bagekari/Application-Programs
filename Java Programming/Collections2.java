import java.util.*;

class Collections2
{
    public static void main(String arg[])
    {
        LinkedList <String>lobj = new LinkedList<String>();

        lobj.add("Kapil");
        lobj.add("Aditya");
        lobj.add("Rohan");
        lobj.add("Rutik");
        lobj.add("Tejas");

        System.out.println("Elements of Linked list are : "+lobj);

        lobj.addFirst("Pooja");
        System.out.println("Elements of Linked list are : "+lobj);

        lobj.addLast("Sneha");
        System.out.println("Elements of Linked list are : "+lobj);

        Iterator iobj = lobj.iterator();
        System.out.println("Data using Iterator is : ");
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        if(lobj.contains("Rohan"))
        {
            System.out.println("Rohan is present in Linked List");
        }
        else
        {
            System.out.println("Rohan is not present in Linked List");
        }

        lobj.remove();
        System.out.println("Elements of Linked list are : "+lobj);

        lobj.remove(0);
        System.out.println("Elements of Linked list are : "+lobj);

        lobj.removeLast();
        System.out.println("Elements of Linked list are : "+lobj);

        System.out.println("Number of elements are : "+lobj.size());        

        lobj.set(1,"Deepak");
        System.out.println("Elements of Linked list are : "+lobj);

        lobj.clear();
        System.out.println("Elements of Linked list are : "+lobj);
    }
}
