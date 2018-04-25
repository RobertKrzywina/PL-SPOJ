import java.util.*;

public class WarunekTablica {

	public static void main(String[] args) throws java.lang.Exception {
		
		Scanner in = new Scanner(System.in);
		
		int x = in.nextInt();
		int tab[] = new int[x];
		
		for(int i=0;i<x;i++) {
			if(in.hasNextInt())
			tab[i] = in.nextInt();
		}
		
		char ch = in.next().charAt(0);
		int warunek = in.nextInt();
		
		if(ch == '>') {
			for(int i=0;i<x;i++) {
				if(tab[i] > warunek)
					System.out.println(tab[i]);
			}
		} else if(ch == '<') {
			for(int i=0;i<x;i++) {
				if(tab[i] < warunek)
					System.out.println(tab[i]);
			}
		}
	}
}
