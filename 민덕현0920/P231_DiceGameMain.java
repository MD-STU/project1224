package 민덕현0920;

import java.util.Random;
import java.util.Scanner;

public class P231_DiceGameMain {
	public static void main(String[] args) {
		P231_DiceGame DG = new P231_DiceGame();
		System.out.println("주사위 숫자 맞추기 게임을 시작합니다.");
		DG.startPlaying();
	}
}

class P231_DiceGame {
	// private int diceFace;
	// private int userGuess;
	Random random = new Random();

	private int RollDice() {

		int diceFace = random.nextInt(6) + 1;
		System.out.println("주사위는 " + diceFace + "가 나왔습니다.");
		return diceFace;
	}

	private int getUserInput(String prompt) {
		int r;
		System.out.print(prompt);
		Scanner sc = new Scanner(System.in);
		r = sc.nextInt();
		return r;
	}

	private int checkUserGuess(int userGuess, int diceFace) {

		if (diceFace == userGuess) {
			System.out.println("맞았습니다.");
			return 1;
		}
			
		else
			System.out.println("틀렸습니다.");
			return 0;
	}

	public void startPlaying() {
		boolean cont = true;
		int score = 0;
		while (cont) {
			int userGuess = getUserInput("예상한값을 입력하시오 :");
			int diceFace = RollDice();
			score += checkUserGuess(userGuess, diceFace);

			System.out.print("1.이어하기 2. 그만두기 : ");
			Scanner sc = new Scanner(System.in);
			int select = sc.nextInt();

			if (select == 1) {
				
				continue;
			} else {
				System.out.println("최종 점수는 : " + score + "입니다.");				
				break;//cont = false;
			}
		}
	}
}