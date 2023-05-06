import java.io.*;


class InputDemoX 
{
    public static void main(String Arg[]) 
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader (System.in));
        //int No1 = 0 , No2 = 0;

        try
        {
        
            System.out.println("Enter first number");
            int No1 = Integer.parseInt(bobj.readLine());

            System.out.println("Enter second number");
            int No2 = Integer.parseInt(bobj.readLine());
                
        }
        catch(IOException obj)
        {

        }

        int Ans = No1 + No2;

        System.out.println("Addition is : "+Ans);

    }
}



/*
 *
C:\Users\admin\Desktop\PPA\Java Programming>javac InputDemoX.java
 
 
C:\Users\admin\Desktop\PPA\Java Programming>java InputDemo.java
Enter first number
10
Enter second number
21
Addition is : 31

 */