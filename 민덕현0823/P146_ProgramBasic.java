package 민덕현0823;

public class P146_ProgramBasic {
	public static void main(String[] args) {
		String str1, str2, str3, str4, str5;
		char [] charArray = {'I',' ', 'L','o','v','e',' ','Y','o','u'};
		
		str1 = "Hi, Byeong Man ";
		str2 = new String(str1);
		str3 = new String(charArray);
		str4 = new String(charArray, 2, 4);
//		char[]t = str1.toCharArray();
//		for(int i = 0; i< t.length;i++)
//			System.out.println(t[i]);
		String str = "I lobe You";
		char [] t = str.toCharArray();
		t[4] = 'v';
		str = new String(t);
		System.out.println(str);
		System.out.println(str1 + str2 + str3 + str4);
	}
}
