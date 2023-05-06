import javax.swing.*;

class SwingDemo 
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }
}


class MarvellousFrame
{
    public  MarvellousFrame(String title)
    {
        JFrame fobj = new JFrame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
    }
}


/*
    AWT         swing
 * Frame        JFrame
 * Button       JButton
 * TextField    JTextField
 */