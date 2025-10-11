package 재활1011;

import java.util.Scanner;

public class P1_Student {

	String 학과;
	int 학번;
	public static void main(String[] args) {
		P1_Student st = new P1_Student();
		st.학과 = "컴퓨터공학부";
		st.학번 = 2025100256;
		System.out.println("학번 : " + st.학과);
		System.out.println("학번 : " + st.학번);
	}
	
	private String get학과() {
		return 학과;
	}

	private void set학과(String 학과) {
		this.학과 = 학과;
	}

	private int get학번() {
		return 학번;
	}

	private void set학번(int 학번) {
		this.학번 = 학번;
	}

}
