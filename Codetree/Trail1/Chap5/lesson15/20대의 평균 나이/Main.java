import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int sum = 0;
        int cnt = 0;

        while(true) {
            int n = sc.nextInt();
            cnt ++;
            if (n >= 30 || n < 20) {
                System.out.printf("%.2f", (double)sum / (cnt-1));
                break;
            } else {
                sum += n;
            }
        }
    }
}