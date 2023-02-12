final class Base
{

}
class Derived extends Base    // [NA]  We Cant Inherit a final class
{

}
class Final3
{
    public static void main(String arr[])
    {
        Base bobj = new Derived();        
    }
}
