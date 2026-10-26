import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String date = sc.next();
        String[] dateStr = date.split("-");

        int month = Integer.parseInt(dateStr[0]);
        int day = Integer.parseInt(dateStr[1]);
        int year = Integer.parseInt(dateStr[2]);

        System.out.println(year + "." + month + "." + day);
    }
}