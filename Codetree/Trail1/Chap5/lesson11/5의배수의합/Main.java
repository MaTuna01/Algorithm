import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int result = 0;

        if (b > a) {
            for (int i = a; i <= b; i++) {
                if (i % 5 == 0) {
                    result += i;
                }
            }
        } else {
            for (int i = b; i <= a; i++) {
                if (i % 5 == 0) {
                    result += i;
                }
            }
        }

        System.out.println(result);
    }
}