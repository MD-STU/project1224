package 민덕현0823;

import java.util.Random;

public class P140_MatrixAdd {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int[][] m1 = new int[3][3], m2 = new int[3][3], m3 = new int[3][3];

		MatrixInitialization(m1, m2);

		MatrixAddition(m1, m2, m3);

		MatrixOutput(m1);
		MatrixOutput(m2);
		System.out.println("===============");
		MatrixOutput(m3);
	}

	public static void MatrixInitialization(int[][] m1, int[][] m2) {
		Random rnd = new Random();
		for (int i = 0; i < m1.length; i++) {
			for (int j = 0; j < m1[i].length; j++) {
				m1[i][j] = rnd.nextInt(100);
				m2[i][j] = rnd.nextInt(100);
			}
		}
	}

	public static void MatrixAddition(int[][] m1, int[][] m2, int[][] m3) {
		for (int i = 0; i < m3.length; i++) {
			for (int j = 0; j < m3[i].length; j++) {
				m3[i][j] = m1[i][j] + m2[i][j];
			}
		}
	}

	public static void MatrixOutput(int[][] m) {
		for (int i = 0; i < m.length; i++) {
			for (int j = 0; j < m[i].length; j++) {
				System.out.print(m[i][j] + " ");
			}
			System.out.println();
		}
		System.out.println();
	}

}
