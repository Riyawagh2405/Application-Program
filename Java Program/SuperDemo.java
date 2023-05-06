
class SuperDemo
{
    public static void main(String Arg[])
    {
        
        Derived dobj = new Derived();
        dobj.gun();

    }    
}
class Base 
{
    public int A;
    public Base()
    {
        System.out.println("Inside Base default constructor");
        this.A = 11 ;
    }
    public Base(int i)
    {
        System.out.println("Inside Base parameterised constructor");
        this.A = 11 ;
    }
    public void fun()
    {
        System.out.println("Inside base fun");
    }
}

class Derived extends Base
{
    public int A;
    public Derived()
    {
        super(11);          //3                                     //3                
        System.out.println("Inside Derived constructor");
        this.A = 51 ;
    }
    public void gun()
    {
        System.out.println("Inside Derived gun");
        System.out.println("Value of A : "+A);      //51
        System.out.println("Value of A : "+this.A); //51
        System.out.println("Value of A : "+super.A);//11      //1                       
        fun();                                      //2                                        //2
    }
}



// 1.Access data of parent from child
// 2.Call method of parent from child
// 3.Call constructor of parent




/*
 * 
C:\Users\admin\Desktop\PPA\Java Programming>javac SuperDemo.java

C:\Users\admin\Desktop\PPA\Java Programming>java SuperDemo.java
Inside Base parameterised constructor
Inside Derived constructor
Inside Derived gun
Value of A : 51
Value of A : 51
Value of A : 11
Inside base fun

 */