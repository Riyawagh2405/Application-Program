import java.awt.*;
import java.awt.event.*;

class GUI5
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }
}

class MarvellousListener extends WindowAdapter
{
    
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}


class MarvellousFrame
{
    public Frame fobj;
    
    public  MarvellousFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
        fobj.addWindowListener(new MarvellousListener());
    }
}