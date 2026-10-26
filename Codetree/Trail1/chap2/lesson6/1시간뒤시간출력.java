import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String time = sc.next();
        String arrStr[] = time.split(":");
        int h = Integer.parseInt(arrStr[0]);
        int m = Integer.parseInt(arrStr[1]);
        System.out.println(h+1 + ":" + m);
    }
}