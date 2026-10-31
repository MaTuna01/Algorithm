import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int result = 0;
        int cnt =0;

        double avg;

        for (int i = a; i <=b; i++) {
            if (i % 5 == 0 || i % 7 == 0) {
                cnt ++;
                result += i;
            }
        }
        avg = (double) result / cnt;
        System.out.printf("%d %.1f", result, avg);
    }
}