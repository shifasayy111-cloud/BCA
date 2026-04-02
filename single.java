package inheritence;

public class single 
{
    void show()
    {
        System.out.println("This is my single class and show function");
    }
}

class parent extends single
{
    void display()
    {
        System.out.println("This is my prent class and display function");
    }

    public static void main()
    {
        parent p=new parent();
        p.show();
        p.display();
    }
}
