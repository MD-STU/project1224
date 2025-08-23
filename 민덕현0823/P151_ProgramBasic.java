package 민덕현0823;

public class P151_ProgramBasic {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String delimStr = " ";
		String words = "minus one	two,three:four.five";
		String [] split = null;
		split = words.split(delimStr);
		for (String s : split )
			System.out.println("-"+s+"-");
	}

}
