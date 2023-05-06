import java.util.Scanner;

class ExceptionDemo 
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int No1 = 0 , No2 = 0; 
        float Ans = 0.0f;

        System.out.println("Enter first number : ");
        No1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        No2 = sobj.nextInt();

        Ans = No1 / No2 ;

        System.out.println("Division is : "+Ans);
    }
}


/*
 * 
C:\Users\admin\Desktop\PPA\Java Programming>javac ExceptionDemo.java

C:\Users\admin\Desktop\PPA\Java Programming>java ExceptionDemo.java
Enter first number :
5
Enter second number :
1
Division is : 5

 */




 /*
  * 
C:\Users\admin\Desktop\PPA\Java Programming>javac ExceptionDemo.java

C:\Users\admin\Desktop\PPA\Java Programming>java ExceptionDemo.java
Enter first number :
15
Enter second number :
5
Division is : 3.0

  */


  /*
   * 
C:\Users\admin\Desktop\PPA\Java Programming>java ExceptionDemo.java
Enter first number :
11
Enter second number :
0
Exception in thread "main" java.lang.ArithmeticException: / by zero
        at ExceptionDemo.main(ExceptionDemo.java:17)

   */