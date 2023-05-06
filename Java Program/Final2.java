class Final2 
{
    public static void main(String Arg[])
    {
        Base bobj = new Derived();
        bobj.fun();     //Derived fun
        bobj.gun();     ////Base gun 
    }    
}


class Base
{
    public void fun()
    {
        System.out.println("Base fun");
    }
    final public void gun()
    {
        System.out.println("Base gun");
    }
}
class Derived extends Base
{
    public void fun()
    {
        System.out.println("Derived fun");
    }
    /*public void gun()
    {
        System.out.println("Derived gun");
    }*/
}





/*
 * 
C:\Users\admin\Desktop\PPA\Java Programming>javac Final2.java

C:\Users\admin\Desktop\PPA\Java Programming>java Final2.java
Derived fun
Base gun

 */