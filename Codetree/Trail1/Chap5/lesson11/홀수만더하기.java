import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int result = 0;
        for (int i = 0; i < n; i++) {
            int m = sc.nextInt();
            result += m;
        }

        System.out.println(result);
    }
}