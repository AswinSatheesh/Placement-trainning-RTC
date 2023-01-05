// str.length()  - directily we can find the length
import java.util.*;
public class Length {
   public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    String str = sc.nextLine(); 
    int length=0;
    for(char ch : str.toCharArray())
    {
    length++;
    }
    System.out.println("Length is : "+ length);
}
}