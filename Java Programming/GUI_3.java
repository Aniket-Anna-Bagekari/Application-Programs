import java.awt.*;
import java.awt.event.*;

class MarvellousFrame
{
    public MarvellousFrame(String tittle)
    {
        Frame fobj = new Frame(tittle);
        fobj.setSize(500,500);
        fobj.setVisible(true);

        fobj.addWindowListener(new MarvellousListener());
    }
}

class MarvellousListener implements WindowListener
{
    public void windowDeactivated(WindowEvent obj){}
    public void windowActivated(WindowEvent obj){}
    public void windowDeiconified(WindowEvent obj){}
    public void windowIconified(WindowEvent obj){}
    public void windowClosed(WindowEvent obj){}
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
    public void windowOpened(WindowEvent obj){}
}

class GUI_3
{
    public static void main(String arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("Marvellous PPA41");
    }
}
