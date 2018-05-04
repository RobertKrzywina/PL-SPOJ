import java.util.Scanner;

class Main
{
	public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int tests = in.nextInt();
        int x, y, sum;

        while(tests-- > 0) {
            sum = 0;
            x = in.nextInt();
            for(int i=0;i<x;i++) {
                y = in.nextInt();
                sum += y;
            }
            System.out.println(x + sum - 1);
        }
    }
}
