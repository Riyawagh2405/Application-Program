import java.util.*;

class Collection1
{
    public static void main(String arg[])
    {
        Hashtable <String, Integer> hobj = new Hashtable<String, Integer>();

        hobj.put("C Programming",900);
        hobj.put("C++ Programming",900);
        hobj.put("Java Programming",900);
        hobj.put("Python Programming",900);

        System.out.println("Book price of java",+hobj.get("Java Programming"));
        hobj.remove("C++ programming");

        Enumeration eobj = hobj.keys();
        while(eobj.hasMoreElements());
        {
            System.out.println(eobj.nextElement());
        }


    }
}