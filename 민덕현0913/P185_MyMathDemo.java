package 민덕현0913;

import java.util.Scanner;

public class P185_MyMathDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("반지름을 입력하세요. : ");
		Scanner sc =  new Scanner(System.in);

		double r = sc.nextDouble();
		System.out.println("원의 둘레 : "+ P186_MyMath.getCirclePerimeter(r));
		System.out.println("원의 면적 : " + P186_MyMath.getCircleArea(r));
		
		System.out.println("마일을 입력하세요. : ");
		r = sc.nextDouble();
		System.out.println(P186_MyMath.mileToKilometer(r) + "킬로미터에 해당합니다.");
		
		System.out.println("킬로미터를 입력하세요. : ");
		r = sc.nextDouble();
		System.out.println(P186_MyMath.kilometerToMile(r)+ "마일에 해당합니다.");
	}

}
