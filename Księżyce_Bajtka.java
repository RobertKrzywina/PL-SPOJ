import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int tests = in.nextInt();

        double r1, r2;

        while(tests-- > 0) {
            r1 = in.nextDouble();
            r2 = in.nextDouble();

            System.out.printf("%.2f\n", r1 * r2 * 2);
        }
    }
}
