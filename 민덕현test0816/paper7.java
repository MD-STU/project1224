package 민덕현test0816;

public class paper7 {
	public static void main(String[] args) {
		String str = "41389";
		int sum=0;

		for(int i = 0; i<str.length();i++) {
			sum+=str.charAt(i)-'0';
		}
		System.out.println("sum="+sum);
	}
}
