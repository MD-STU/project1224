package 민덕현0823;

public class P150_ProgramBasic {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String regExp = " |,|:|\\.";
		String words  = "one two,three:four.five";
		String newStr = words.replaceAll(regExp, "-");
		System.out.println(newStr);
	}

}
