class StaticDemo
{
    static
    {
        System.out.println("Inside Static block of StaticDemo class which contains main");
    }
    public StaticDemo()
    {
        System.out.println("Inside Constructor of StaticDemo");
    }
    public static void main(String arg[])
    {
        System.out.println("Inside main");
        System.out.println("Value of Static No3 : "+Demo.No3);  // Demo::No3;
        System.out.println("Value of Static No4 : "+Demo.No4);  // Demo::No4;
        Demo.gun();  // Demo::gun();

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();

        obj1.fun();
    }
}

class Demo
{
    public int No1;           // Non Static Characteristics
    public int No2;           // Non Static Characteristics
    public static int No3;    // Static Characteristics
    public static int No4;    // Static Characteristics

    static                    // static block
    {
        System.out.println("Inside Static Block");
        No3 = 51;
        No4 = 101;
    }
    public Demo()             // Constructor
    {
        System.out.println("Inside Constructor");
        No1 = 11;
        No2 = 21;
    }
    public void fun()         // Non Static Method
    {
        // Non Static can access static as well as non static Data
        // We can use 'this' keyword in static method
        System.out.println("Inside non static method fun");
        System.out.println("Value of No1 : "+this.No1);
        System.out.println("Value of No2 : "+this.No2);
        System.out.println("Value of No3 : "+this.No3);
        System.out.println("Value of No4 : "+this.No4);
    }
    public static void gun()  // Static Method
    {
        // Static Method can access only static Data
        // We cant use 'this' keyword in static method
        System.out.println("Inside static method gun");
        // System.out.println("Value of No1 : "+No1);     // NA    // Because it is non static
        // System.out.println("Value of No2 : "+No2);     // NA    // Because it is non static
        System.out.println("Value of No3 : "+No3);
        System.out.println("Value of No4 : "+No4);
    }
}
