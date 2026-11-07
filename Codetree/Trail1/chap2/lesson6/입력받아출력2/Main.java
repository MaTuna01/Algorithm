import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String citizen_num = sc.next();
        String[] split = citizen_num.split("-");
        System.out.println(split[0] + split[1]);
    }
}