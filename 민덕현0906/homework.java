package 민덕현0906;

import java.util.Scanner;

import 민덕현0823.P142_SeatReservation;

public class homework {

	public static void main(String[] args) {
		String[] ids = new String[100];
		String[] pws = new String[100];
		int count = 0;// 인원수
		Scanner sc = new Scanner(System.in);
		char select;

		do {
			System.out.println("s : 회원가입");
			System.out.println("r : 로그인");
			System.out.println("c : 종료");
			System.out.print("원하는 글자를 입력하시오. :");
			select = sc.nextLine().charAt(0);
			System.out.println("현재 회원 수 :" + count);
			switch (select) {
			case 's':
				count = JoinTheMembership(ids, pws, count);
				break;
			case 'r':
				LogIn(ids, pws, count);
				break;
			case 'c':
				System.out.println("시스템이 종료되었습니다.");
				return;
			}

		} while (true);

	}

	public static int JoinTheMembership(String[] ids, String[] pws, int count) {
		System.out.println("아이디를 입력하시오. :");
		Scanner sc = new Scanner(System.in);
		ids[count] = sc.nextLine();
		System.out.println("비밀번호를 입력하시오. :");
		pws[count] = sc.nextLine();
		count++;
		return count;
		// sc.close();

	}

	public static void LogIn(String[] ids, String[] pws, int count) {
		String ids_login;
		String pws_login;

		Scanner sc = new Scanner(System.in);
		System.out.println("아이디를 입력하시오. :");
		ids_login = sc.nextLine();
		System.out.println("비밀번호를 입력하시오. :");
		pws_login = sc.nextLine();

		int flag = 0;
		for (int i = 0; i < count; i++) {
			if (ids_login.equals(ids[i])) {
				flag = 1;
				if (pws_login.equals(pws[i])) {
					flag = 2;
				}
				break;
			}
		}

		if (flag == 2) {
			System.out.println("아이디와 패스워드 모두 일치합니다.");
			
			P142_SeatReservation.main(null);
		} else if (flag == 1) {
			System.out.println("패스워드가 일치하지 않습니다.");
		} else {
			System.out.println("아이디가 일치하지 않습니다.");
		}
	}
}
