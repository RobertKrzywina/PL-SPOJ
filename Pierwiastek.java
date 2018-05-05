import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int tests = in.nextInt();

        while(tests-- > 0) {
            double number = in.nextInt();
            if(number <= 0)
                System.out.println("NIE");
            else {
                double checkPerfectSqrt = Math.sqrt(number);
                int x = (int) checkPerfectSqrt;
                if(Math.pow(checkPerfectSqrt, 2) == Math.pow(x, 2))
                    System.out.println("TAK");
                else
                    System.out.println("NIE");
            }
        }
    }
}
