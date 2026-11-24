import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int cnt = 0;

        while (true) {

            if (cnt == 3) {
                break;
            }

            int n = sc.nextInt();

            if (n % 2 != 0) {
                continue;
            } else {
                cnt++;
                System.out.println(n / 2);
            }
        }
    }
}