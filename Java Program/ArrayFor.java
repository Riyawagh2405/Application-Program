import java.util.*;

public class ArrayFor 
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements :");

        Arr[0] = sobj.nextInt();
        Arr[1] = sobj.nextInt();
        Arr[2] = sobj.nextInt();
        Arr[3] = sobj.nextInt();

        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
        System.out.println(Arr[3]);

        sobj.close();
    }
}



/*
 * 
 * 
C:\Users\admin\Desktop\PPA\Java Programming>javac ArrayFor.java

C:\Users\admin\Desktop\PPA\Java Programming>java ArrayFor.java
Enter the size of array :
4
Enter the elements :
10
20
30
40
10
20
30
40
 * 
 */