import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String num = sc.next();

        String[] numSplit = num.split("-");

        System.out.println(numSplit[0] + "-" + numSplit[2] + "-" + numSplit[1]);
    }
}