import java.util.Scanner;

class ExceptionDemoX 
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

        try
        {
            System.out.println("Inside try block");
            Ans = No1 / No2 ;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Exception occured & code is inside catch block "+obj);

        }
        finally
        {
            System.out.println("Code is inside finally");
            System.out.println("Division is : "+Ans);
        }

        System.out.println("Division is : "+Ans);
    }
}




/*
 * C:\Users\admin\Desktop\PPA\Java Programming>javac ExceptionDemoX.java

C:\Users\admin\Desktop\PPA\Java Programming>java ExceptionDemoX.java
Enter first number :
10
Enter second number :
2
Inside try block
Code is inside finally
Division is : 5.0
Division is : 5.0

C:\Users\admin\Desktop\PPA\Java Programming>java ExceptionDemoX.java
Enter first number :
10
Enter second number :
0
Inside try block
Exception occured & code is inside catch block java.lang.ArithmeticException: / by zero
Code is inside finally
Division is : 0.0
Division is : 0.0

 */