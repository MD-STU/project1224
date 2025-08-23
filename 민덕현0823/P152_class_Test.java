package 민덕현0823;

public class P152_class_Test {
	public static void main(String[] args) {
		String regExp = "01[078]-\\d{4}-\\d{4}";
		
		String Str = new String("010-5182-0173");
		System.out.println(Str.matches(regExp));
		
		Str = new String("013-5182-0173");
		System.out.println(Str.matches(regExp));
		
		Str = new String("013-518-0173");
		System.out.println(Str.matches(regExp));
	}
}
