import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 일
        int A = sc.nextInt();
        // 월
        int B = sc.nextInt();
        // 분
        int C = sc.nextInt();
        if (A < 11) {
            System.out.println(-1);
            return;
        }
        if (A == 11 && B < 11) {
            System.out.println(-1);
            return;
        }
        if (A ==1 && B == 11 && C < 11){
            System.out.println(-1);
            return;
        }

        int elapsedMin = 0;
        int elapsedHour = 0;

        while (true) {
            if (A == 11 && B == 11 && C == 11)
                break;
            C--;
            elapsedMin++;
            if (C == 0) {
                B--;
                C = 60;
            }
            if (B == 0) {
                A--;
                B = 24;
            }

            if (elapsedMin % 60 == 0) {
                elapsedHour++;
            }
        }
        System.out.println(elapsedMin);
    }
}
