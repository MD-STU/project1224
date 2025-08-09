package 민덕현;

import java.util.Random;

public class P41_Modulus {
		public static void main(String[] args) {
			int x,y;
			
			Random r = new Random();
			x = r.nextInt(1000);
			y = x%101;
			System.out.println(x+"=>"+y);
			
			x = r.nextInt(1000);
			y = (x%100)+1;
			System.out.println(x+"=>"+y);
			
		}
}
