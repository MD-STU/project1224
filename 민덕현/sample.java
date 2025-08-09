package 민덕현;

public class sample {

	public static void main(String[] args) {
		int m1 = 15;
		System.out.println(m1);
		int m2 = 014;
		System.out.println(m2);
		int m3 = 0x15;
		System.out.println(m3);

		float f = 12.3f;
		System.out.println(f);
		double d = 12.3;
		System.out.println(d);
		
		char c1 = '\u0042';
		System.out.println(c1);
		char c2 = '\uae00';
		System.out.println(c2);
		
//		boolean b = true;
//		System.out.println(b);
		String str1 = null;
		System.out.println(str1);
		
		String str2 = "I love you";
		System.out.println(str2);
		
		final double PI = 3.141592;
		System.out.println(PI);
		
		int x,y;
		x = 10;
		y = x;
		System.out.println(y);
		int a = 10, b= 5;
		a  = a+1;
		a = b = 4;
		a = (b=4)+1;
		System.out.println(a);
	}

}
