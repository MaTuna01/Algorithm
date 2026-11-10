import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int input = sc.nextInt();
            sum += input;
        }

        double num = (double)sum/n;
        String result = String.format("%.1f", num);

        System.out.printf("%d %s", sum, result);
    }
}