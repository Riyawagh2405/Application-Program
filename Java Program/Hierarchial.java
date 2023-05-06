
class Hierarchial
{
    public static void main(String Arg[])
    {
        
        DerivedX dobj = new DerivedX();         //No castiong
        dobj.fun();

        System.out.println(dobj.A); //11
        System.out.println(dobj.B); //21
        System.out.println(dobj.X); //111
        //System.out.println(dobj.Y); //
        //System.out.println(dobj.Z); //
        
        
    }    
}
class Base 
{
    public int A;
    public int B;

    public Base()
    {
        System.out.println("Inside Base constructor");
        this.A = 11 ;
        this.B = 21 ;
    }
    public void fun()
    {
        System.out.println("Inside base fun");
    }
}

class Derived extends Base          //class Derived : public Base
{
    public int X;
    public int Y;

    public Derived()
    {
        System.out.println("Inside Derived constructor");
        this.X = 51 ;
        this.Y = 101 ;
    }
    public void gun()
    {
        System.out.println("Inside Derived gun");
    }
}

class DerivedX extends Derived
{
    public int Z ;
    public DerivedX()
    {
        System.out.println("Inside DerivedX constructor");
        this.Z = 111 ;
    }
}




/*
 * 
C:\Users\admin\Desktop\PPA\Java Programming>javac Hierarchial.java

C:\Users\admin\Desktop\PPA\Java Programming>java Hierarchial.java
Inside Base constructor
Inside Derived constructor
Inside DerivedX constructor
Inside base fun
11
21
51

 */