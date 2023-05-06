
class Final3
{
    public static void main(String Arg[])
    {
        Base bobj = new Base();
        
    }    
}

final class Base
{
    //code
}
class Derived extends Base
{
    //code
}




/*]
C:\Users\admin\Desktop\PPA\Java Programming>javac Final3.java
Final3.java:15: error: cannot inherit from final Base
class Derived extends Base
                      ^
1 error
 */