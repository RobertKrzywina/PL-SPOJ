import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String text = in.nextLine();

        if (text.equals("SZYFRUJ")) {

            int key = in.nextInt();
            in.nextLine();
            text = in.nextLine();
            String newKey = Integer.toString(key);
            int length = text.length();
            int lengthKey = newKey.length();
            char[] charArray = text.toCharArray();
            char[] charNewKeyArray = newKey.toCharArray();

            for (int i = 0, j = 0; i < length; i++, j++) {
                if (j == lengthKey) j = 0;
                int x = (int)charNewKeyArray[j] - 48;
                if (charArray[i] + x > 89)
                    System.out.printf("%c", charArray[i] + x - 26);
                else
                    System.out.printf("%c", charArray[i] + x);
            }
        } else if (text.equals("DESZYFRUJ")) {

            int key = in.nextInt();
            in.nextLine();
            text = in.nextLine();
            String newKey = Integer.toString(key);
            int length = text.length();
            int lengthKey = newKey.length();
            char[] charArray = text.toCharArray();
            char[] charNewKeyArray = newKey.toCharArray();

            for (int i = 0, j = 0; i < length; i++, j++) {
                if (j == lengthKey) j = 0;
                int x = (int)charNewKeyArray[j] - 48;
                if (charArray[i] + x < 65)
                    System.out.printf("%c", charArray[i] - x + 26);
                else
                    System.out.printf("%c", charArray[i] - x);
            }
        }
    }
}
