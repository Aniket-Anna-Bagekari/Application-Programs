import java.awt.*;

class MarvellousFrame
{
    public MarvellousFrame(String tittle)
    {
        Frame fobj = new Frame(tittle);

        fobj.setSize(500,500);

        fobj.setVisible(true);
    }
}

class GUI_2
{
    public static void main(String arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("Marvellous PPA41");
    }
}
