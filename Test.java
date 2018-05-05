import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int counter = 0;

        String text = in.next();
        char[] arrayOne = text.toCharArray();

        text = in.next();
        char[] arrayTwo = text.toCharArray();

        text = in.next();
        char[] arrayThree = text.toCharArray();

        int length = arrayOne.length;

        for (int i = 0; i < length; i++)
            if (arrayTwo[i] == arrayThree[i] && arrayOne[i] != arrayTwo[i] && arrayOne[i] != arrayThree[i])
                counter+=2;
            else if(arrayTwo[i] != arrayOne[i] && arrayThree[i] == arrayOne[i])
                counter++;
            else if(arrayThree[i] != arrayOne[i] && arrayTwo[i] == arrayOne[i])
                counter++;
            else if(arrayTwo[i] != arrayOne[i] && arrayThree[i] != arrayOne[i] && arrayTwo[i] != arrayThree[i])
                counter++;

        System.out.println(counter);
    }
}
