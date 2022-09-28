import java.util.Scanner;

public class B2749 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		sc.close();

		int p = 1500000; 
		long[] modArr = new long[p];

		modArr[0] = 0;
		modArr[1] = 1;

		for (int i = 2; i < p; i++) {
			if (i > n)
				break;

			modArr[i] = modArr[i - 1] + modArr[i - 2];
			modArr[i] %= (long) Math.pow(10, 6);
		}

		if(n >= p) {
			n %= p;
		}

		System.out.println(modArr[(int)n]);

	}

}