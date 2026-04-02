
import java.util.Scanner;

public class Marksheet {
    public static void main(String[] args) {
        Scanner s1=new Scanner(System.in);
        System.out.println("Enter your Marks");
        int Marks=s1.nextInt();
        if(Marks >= 90)
        {
            System.err.println("you are in First Gared");
        }
        else if(Marks >= 70)
        {
            System.out.println("you are in second Gared");
        }
        else if(Marks >= 60)
        {
            System.out.println("you are in third Gared");
        }
        else 
        {
            System.out.println("fail");
        }
    }
}
