package 민덕현0823block;

public class P149 {
	 public static void main(String[] args) {
		String str1 = "abcisabcisabc";
		
		System.out.println(str1.indexOf("abc"));
		System.out.println(str1.indexOf('i'));
		System.out.println(str1.indexOf('i',4));
		System.out.println(str1.lastIndexOf("abc"));
		System.out.println(str1.lastIndexOf('s'));
		System.out.println(str1.lastIndexOf('s', 8));
	}
}
