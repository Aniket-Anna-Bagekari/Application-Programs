import javax.swing.*;
import java.awt.event.*;

class Calculator1 extends WindowAdapter implements ActionListener
{
    public JFrame mainFrame;
    public JButton b1, b2, b3, b4;
    public JTextField t1, t2;
    public JLabel lobj;
    Integer no1, no2;

    public Calculator1(int width, int height, String Tittle)
    {
        mainFrame = new JFrame(Tittle);
        mainFrame.setSize(width,height);
        
        mainFrame.addWindowListener(this);

        b1 = new JButton("Add");
        b2 = new JButton("Sub");
        b3 = new JButton("Mult");
        b4 = new JButton("Div");

        t1 = new JTextField();
        t2 = new JTextField();

        b1.setBounds(1,280,80,40);    // (x coordinate, y coordinate, width, height);
        b2.setBounds(100,280,80,40);    
        b3.setBounds(190,280,80,40);    
        b4.setBounds(290,280,80,40);

        t1.setBounds(70,100,100,40);
        t2.setBounds(220,100,100,40);

        mainFrame.add(b1);
        mainFrame.add(b2);    
        mainFrame.add(b3);
        mainFrame.add(b4);

        mainFrame.add(t1);
        mainFrame.add(t2);

        lobj = new JLabel();
        lobj.setBounds(150,25,200,100);

        mainFrame.add(lobj);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);

        mainFrame.setLayout(null);
        mainFrame.setVisible(true);
    }

    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }

    public void actionPerformed(ActionEvent obj)
    {
        try
        {
            no1 = Integer.parseInt(t1.getText());
            no2 = Integer.parseInt(t2.getText());

            if(obj.getSource() == b1)
            {
                lobj.setText("Addition is : "+(no1+no2));
            }
            else if(obj.getSource() == b2)
            {
                lobj.setText("Subtraction is : "+(no1-no2));  
            }
            else if(obj.getSource() == b3)
            {
                lobj.setText("Multiplication is : "+(no1*no2));
            }
            else if(obj.getSource() == b4)
            {
                lobj.setText("Division is : "+(no1/no2));
            }
        }
        catch(Exception eobj)
        {}
    }
}

class Calculator
{
    public static void main(String arg[])
    {
        Calculator1 cobj = new Calculator1(400,400," Calculator ");
    }
}
