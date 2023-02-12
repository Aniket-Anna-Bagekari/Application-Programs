import java.awt.*;
import java.awt.event.*;

class MarvellousFrame
{
    public MarvellousFrame(String tittle)
    {
        Frame fobj = new Frame(tittle);
        fobj.setSize(500,500);
        fobj.setVisible(true);

        Button bobj = new Button("OK");
        fobj.add(bobj);
        fobj.addWindowListener(new MarvellousListener());
    }
}

class MarvellousListener extends WindowAdapter
{
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}

class GUI_6
{
    public static void main(String arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("Marvellous PPA41");
    }
}
