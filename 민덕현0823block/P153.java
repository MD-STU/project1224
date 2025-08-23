package 민덕현0823block;

public class P153 {
	public static void main(String[] args) {
		String formatStr = "학과 %s - 최댓값 : %d, 최솟값 : %d, 평균 : %f";
		String fs = String.format(formatStr, depart, max, min, avg);
		System.out.println(fs);
	}
}
