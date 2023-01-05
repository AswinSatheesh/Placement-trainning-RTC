import java.util.*;
public class OddEvenAlternate{
    public static void main(String[] args)
    {
        int[] arr = {1, 3, 2, 5, 4, 7, 10};
        int len =7;
        //modern sorting
        // Arrays.sort(arr);

        //normal sorting
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len-1-i;j++)
            {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        for(int i=0;i<len;i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
}