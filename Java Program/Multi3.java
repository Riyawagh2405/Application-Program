public class Multi3 
{
    public static void main(String Arg[])
    {
        Thread t = Thread.currentThread();
        System.out.println("Name of current thread is "+t.getName());
        System.out.println("Priority of thread is"+t.getPriority());        
    }    
}


/*
 * 
 * 

C:\Users\admin\Desktop\PPA\Java Programming>javac Multi3.java

C:\Users\admin\Desktop\PPA\Java Programming>java Multi3.java
Name of current thread is main
Priority of thread is5

 */