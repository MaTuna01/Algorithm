import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while(true) {
            int n = sc.nextInt();

            switch(n) {
                case 1:
                    System.out.println("John");
                    break;
                case 2:
                    System.out.println("Tom");
                    break;
                case 3:
                    System.out.println("Paul");
                    break;
                case 4:
                    System.out.println("Sam");
                    break;
                default:
                    System.out.println("Vacancy");
                    return;
            }
        }
    }
}