import java.util.*;
public class Main1{
    public static void main(String[] args){
        String n;
        float num = 5.66f;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        n = sc.nextLine();
        System.out.println(n);
        System.out.println(num);
        int Len;
        Len = n.length();
        System.out.println("Length is : ", Len);
    }
}