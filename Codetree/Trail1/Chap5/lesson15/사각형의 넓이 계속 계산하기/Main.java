import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while(true) {
            int w = sc.nextInt();
            int h = sc.nextInt();
            char c = sc.next().charAt(0);

            System.out.println(w * h);
            if (c == 'C') {
                break;
            } else{
                continue;
            }
        }
        sc.close();
    }
}