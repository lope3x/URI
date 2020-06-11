import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        int[] finais = {1,7,9,3};
        long n;
        for(int i = 0;i<t;i++){
            n = sc.nextInt();
            n = n&3;
            System.out.println(finais[(int)n]);
        }

    }
}