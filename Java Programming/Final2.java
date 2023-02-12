class Base
{
    public void fun()
    {
        System.out.println("Base fun");
    }
    public final void gun()
    {
        System.out.println("Base gun");
    }
}

class Derived extends Base
{
    public void fun()
    {
        System.out.println("Base fun");
    }
    public void gun()    // Overriding of final method is NA
    {
        System.out.println("Base gun");
    }
}

class Final2
{
    public static void main(String arr[])
    {
        Base bobj = new Derived();        
    }
}
