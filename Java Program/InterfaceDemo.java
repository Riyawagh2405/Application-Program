
class InterfaceDemo 
{
    public static void main(String Arg[]) 
    {
        Demo obj = new Demo();
        float fRet = 0.0f;

        fRet = obj.CalculateArea(10.5f);
        System.out.println("Area is : "+fRet);

        fRet = obj.CalculateCircumference(10.5f);
        System.out.println("Circumference is : "+fRet);
    }  
}


interface Circle
{
    public final float PI = 3.14f ;

    public float CalculateArea(float Radius);
    public float CalculateCircumference(float Radius);
}

class Demo implements Circle
{
    public float CalculateArea(float Radius)
    {
        return PI * Radius * Radius ;
    }
    public float CalculateCircumference(float Radius)
    {
        return 2 * Radius * Radius;
    }
}



/*
 * 
C:\Users\admin\Desktop\PPA\Java Programming>javac InterfaceDemo.java

C:\Users\admin\Desktop\PPA\Java Programming>java InterfaceDemo.java
Area is : 346.185
Circumference is : 220.5

 */