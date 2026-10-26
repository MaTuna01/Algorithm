import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String date = sc.next();
        String[] dateSplit = date.split("\\.");

        int year = Integer.parseInt(dateSplit[0]);
        int month = Integer.parseInt(dateSplit[1]);
        int day = Integer.parseInt(dateSplit[2]);
        System.out.println(month + "-" + day + "-" + year);
    }
}