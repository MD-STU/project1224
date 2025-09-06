package 민덕현0906;

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class P166_RegularExpression {

	private static String getString(String s1, String s2, String s3) {//
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String input;
		Pattern pattern;
		Matcher m;
		while (true) {
			System.out.println(s1);
			input = sc.nextLine();
			pattern = Pattern.compile(s2);
			m = pattern.matcher(input);
			
			if (!m.matches()) {
				System.out.println(s3);
				System.out.println("다시 입력해주세요.:");
			}
			
			else {
				break;
			}
		}
		
		return input;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String name = getString("이름 : ", "^[가-힣]{2,4}$", "이름 형식에 맞지 않습니다.");//
//		String address = getString("주소 : ", "^[가-힣]{2,4}도\\s+[가-힣]{2,4}" + "시\\s+[가-힣]{2,6}로\\s+\\d{2,4}$",
//				"주소 형식에 맞지 않습니다.");
//		String ZipCode = getString("우편번호 : ", "^\\d{5}$", "우편번호 형식에 맞지 않습니다.");
//		String PhoneNumber = getString("전화번호 : ", "^01[01]-\\d{4}-\\d{4}$", "전화번호 형식에 맞지 않습니다.");

		//혈액형			^[A,B,O,AB]$
		//mbti
		//생일
		String BloodType = getString("혈액형 : ", "^[A,B,O,AB]$", "혈액형 형식에 맞지 않습니다.");
		String MBTI = getString("mbti : ", "^[E,I][N,S][T,F][P,J]$", "mbti 형식에 맞지 않습니다.");
		String BirthDay = getString("생일 : ", "^//d[1-12]//s//d[1-31]$", "생일 형식에 맞지 않습니다.");
		/*
		 * Scanner sc = new Scanner(System.in); String input; Pattern pattern; Matcher
		 * m;
		 * 
		 * System.out.println("이름 : "); input = sc.nextLine(); pattern =
		 * Pattern.compile("^[가-힣]{2,4}$"); m = pattern.matcher(input); if(!m.matches())
		 * { System.out.println("이름 형식에 맞지 않습니다."); return; }
		 * 
		 * System.out.println("주소 : "); input = sc.nextLine(); pattern =
		 * Pattern.compile("^[가-힣]{2,4}도\\s+[가-힣]{2,4}" +
		 * "시\\s+[가-힣]{2,6}로\\s+\\d{2,4}$"); m = pattern.matcher(input);
		 * if(!m.matches()) { System.out.println("주소 형식에 맞지 않습니다."); return; }
		 * 
		 * System.out.println("우편번호 : "); input = sc.next(); pattern =
		 * Pattern.compile("^\\d{5}$"); m = pattern.matcher(input); if(!m.matches()) {
		 * System.out.println("우편번호 형식에 맞지 않습니다."); return; }
		 * 
		 * System.out.println("핸드폰 번호 : "); input = sc.next(); pattern =
		 * Pattern.compile("^01[01]-\\d{4}-\\d{4}$"); m = pattern.matcher(input);
		 * if(!m.matches()) { System.out.println("핸드폰 번호 형식에 맞지 않습니다."); return; }
		 */

		System.out.println("이름 : " + name);
//		System.out.println("주소 : " + address);
//		System.out.println("우편번호 : " + ZipCode);
//		System.out.println("전화번호 : " + PhoneNumber);
		System.out.println("혈액형 : " + BloodType);
		System.out.println("mbti : " + MBTI);
		System.out.println("생일 : " + BirthDay);
	}

}
