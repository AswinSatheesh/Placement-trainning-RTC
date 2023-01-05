import java.util.Scanner;
public class Differencesum{
    public static void main(String[] args)
    {
        int Evensum=0,Oddsum =0,Totaldiff=0,m,n;
        System.out.println("Enter N: ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        System.out.println("Enter M: ");
        m = sc.nextInt();
        for(int i =1; i<=m;i++)
        {
            if(i % n == 0)
            {
                Evensum = Evensum + i;
            }
            else{
                Oddsum = Oddsum + i;
            }
        }
        
        Totaldiff = Evensum - Oddsum;
        
        System.out.println("Total difference : " + Math.abs(Totaldiff));

    }
}