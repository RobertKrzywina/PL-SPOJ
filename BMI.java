import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int tests = in.nextInt();
        String[][] array = new String[3][tests+1];

        array[0][0] = "niedowaga";
        array[1][0] = "wartosc prawidlowa";
        array[2][0] = "nadwaga";

        int iteratorOne = 1, iteratorTwo = 1, iteratorThree = 1;
        float weight, growth, result;
        String text;

        while(tests-- > 0) {
            text = in.next();
            weight = in.nextFloat();
            growth = in.nextFloat();
            result = BMI(weight, growth);
            if(result < 18.5) {
                array[0][iteratorOne] = text;
                iteratorOne++;
            }
            else if(result < 25) {
                array[1][iteratorTwo] = text;
                iteratorTwo++;
            }
            else {
                array[2][iteratorThree] = text;
                iteratorThree++;
            }
        }

        for(int i=0;i<iteratorOne;i++)
            System.out.println(array[0][i]);

        System.out.println();

        for(int i=0;i<iteratorTwo;i++)
            System.out.println(array[1][i]);

        System.out.println();

        for(int i=0;i<iteratorThree;i++)
            System.out.println(array[2][i]);
        
    }
    static float BMI(float w, float g) { return w / (g * g) * 10000; }
}
