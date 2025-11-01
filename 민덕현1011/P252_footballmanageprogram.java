package 민덕현1011;

import java.util.Scanner;

public class P252_footballmanageprogram {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		P252_footballmanageprogram fmp = new P252_footballmanageprogram();
		fmp.start();

	}

	구단[] club = new 구단[100];
	int count = 0;
	Scanner sc = new Scanner(System.in);
	boolean cont = true;

	void add() {
		System.out.println("<<구단 추가>>");
		System.out.println("구단의 이름을 입력하시오.");
		String name = sc.next();
		club[count] = new 구단(name);
		count++;
		System.out.println("구단이 생성되었습니다.");
	}

	void edit() {

		System.out.println("<<구단 편집>>");
		for (int i = 0; i < count; i++) {
			System.out.println((i + 1) + "." + club[i].getClub_name());
		}
		System.out.println((count + 1) + "." + " 나가기");
		System.out.print("입력 : ");
		int select_e = sc.nextInt();

		if (select_e >= 1 || select_e <= count) {
			club[select_e - 1].team_edit();
		}

		else if (select_e == count + 1) {
			System.out.println("구단 편집을 끝냅니다.");
		}

	}

	void del() {
		System.out.println("<<삭제할 구단을 선택하시오.>>");
		for (int i = 0; i < count; i++) {
			System.out.println((i + 1) + "." + club[i].getClub_name());
		}
		System.out.print("입력 : ");
		int select_del = sc.nextInt();
		club[select_del - 1].p_c_del();
		count--;
		club[select_del - 1].setClub_name(null);
		for (int i = 0; i < count; i++) {
			club[i] = club[i+1]; 
		}
		club[count] = null;
	}

	void see() {
		System.out.println("<<구단 보기>>");
		for (int i = 0; i < count; i++) {
			System.out.println((i + 1) + "." + club[i].getClub_name());
		}
		System.out.print("입력 : ");
		int select_se = sc.nextInt();
		club[select_se - 1].see_p();
		club[select_se - 1].see_c();

	}

	void start() {

		while (cont) {
			System.out.println("<축구구단 관리 프로그램>");
			System.out.println("1. 구단 추가");
			System.out.println("2. 구단 편집");
			System.out.println("3. 구단 삭제");
			System.out.println("4. 구단 보기");
			System.out.println("5. 프로그램 종료");
			System.out.print("입력 : ");
			int select_st = sc.nextInt();
			switch (select_st) {
			case 1:
				add();
				break;
			case 2:
				edit();
				break;
			case 3:
				del();
				break;
			case 4:
				see();
				break;
			case 5:
				System.out.println("프로그램 종료");
				cont = false;
				break;
			default:
				System.out.println("다시입력해주세요.");
				continue;
			}

		}
	}
}














class 구단 {
	private String club_name;
	private Scanner sc = new Scanner(System.in);
	private boolean cont = true;
	private 선수[] player = new 선수[22];
	private 코치[] coach = new 코치[10];
	private int p_count = 0;
	private int c_count = 0;

	public 구단(String n) {
		club_name = n;
	}

	public void setClub_name(String club_name) {
		this.club_name = club_name;
	}

	void p_c_del() {
		for (int i = 0; i < p_count; i++) {
			player[i].setPlayer_n(null);
			player[i] = null;
		}
		
		for (int i = 0; i < c_count; i++) {
			coach[i].setCouch_n(null);
			coach[i] = null;
		}
		player = null;
		coach = null;
		sc=null;
	}

	void see_p() {
		System.out.println("<<선수>>");
		for (int i = 0; i < p_count; i++) {
			System.out.println((i + 1) + "." + player[i].getPlayer_n());
		}
	}

	void see_c() {
		System.out.println("<<코치>>");
		for (int i = 0; i < c_count; i++) {
			System.out.println((i + 1) + "." + coach[i].getCouch_n());
		}
	}

	void add_p() {
		System.out.println("<<선수를 추가합니다>>");
		System.out.print("선수이름을 입력해주세요 :");
		String name = sc.next();
		player[p_count++] = new 선수(name);
		System.out.println(name + "가 추가되었습니다.");
	}

	void add_c() {
		System.out.println("<<코치를 추가합니다>>");
		System.out.print("코치이름을 입력해주세요 :");
		String name = sc.next();
		coach[c_count++] = new 코치(name);
		System.out.println(name + "가 추가되었습니다.");
	}

	void player_del() {
		System.out.println("<<선수>>");
		for (int i = 0; i < p_count; i++) {
			System.out.println((i + 1) + "." + player[i].getPlayer_n());
		}
		System.out.println("입력 : ");
		int select_p_del = sc.nextInt();
		p_count--;
		player[select_p_del - 1].setPlayer_n(null);
		for (int i = select_p_del - 1; i < p_count; i++) {
			player[i] = player[i + 1];
		}
		player[p_count] = null;
	}

	void coach_del() {
		System.out.println("<<코치>>");
		for (int i = 0; i < c_count; i++) {
			System.out.println((i + 1) + "." + coach[i].getCouch_n());
		}
		System.out.println("입력 : ");
		int select_c_del = sc.nextInt();
		c_count--;
		coach[select_c_del - 1].setCouch_n(null);
		for (int i = select_c_del - 1; i < c_count; i++) {
			coach[i] = coach[i + 1];
		}
		coach[c_count] = null;
	}

	public void setP_count(int p_count) {
		this.p_count = p_count;
	}

	void team_edit() {
		while (cont) {
			System.out.println("<<" + club_name + "구단을 편집합니다.>>");
			System.out.println("1. 코치추가");
			System.out.println("2. 선수추가");
			System.out.println("3. 코치삭제");
			System.out.println("4. 선수삭제");
			System.out.println("5. 나가기");
			System.out.print("입력 :");
			int select_te = sc.nextInt();
			switch (select_te) {
			case 1:
				add_c();
				break;
			case 2:
				add_p();
				break;
			case 3:
				coach_del();
				break;
			case 4:
				player_del();
				break;
			case 5:
				cont = false;
				System.out.println("편집을 종료합니다.");
				break;
			}
		}
	}

	public 선수[] getPlayer() {
		return player;
	}

	public String getClub_name() {
		return club_name;
	}

	public int getP_count() {
		return p_count;
	}

	public int getC_count() {
		return c_count;
	}

}

class 선수 {
	private String player_n;

	public 선수(String n) {
		player_n = n;
	}

	public String getPlayer_n() {
		return player_n;
	}

	public void setPlayer_n(String player_n) {
		this.player_n = player_n;
	}
}

class 코치 {
	private String couch_n;

	public 코치(String n) {
		couch_n = n;
	}

	public String getCouch_n() {
		return couch_n;
	}

	public void setCouch_n(String couch_n) {
		this.couch_n = couch_n;
	}

}
