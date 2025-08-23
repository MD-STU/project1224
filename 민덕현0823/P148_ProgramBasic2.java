package 민덕현0823;

public class P148_ProgramBasic2 {
	public static void main(String[] args) {
		String Str1 = new String("I Love You!!");
		String Str2 = Str1;
		String Str3 = new String("I Hate YOu!!");
		
		if(Str1.compareTo(Str2)==0)
			System.out.println("Equal");
		else
			System.out.println("Not Equal");
		
		if(Str1.compareTo(Str3)>0)
			System.out.println("Greater");
		else if(Str1.compareTo(Str3) < 0)
			System.out.println("Less");
		else 
			System.out.println("Equal");
	}
}
