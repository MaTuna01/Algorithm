import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String cold;
        int temp;

        int emergency = 0;

        for (int i = 0; i < 3; i++) {
            cold=sc.next();
            temp=sc.nextInt();

            if (cold.equals("Y") && temp >= 37) {
                emergency ++;
            }
        }
        if (emergency >= 2) {
            System.out.println("E");
        } else {
            System.out.println("N");
        }
    }
}