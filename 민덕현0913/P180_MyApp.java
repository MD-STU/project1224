package 민덕현0913;

public class P180_MyApp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		P179_MyInteger2 ob1 = new P179_MyInteger2(), ob2 = new P179_MyInteger2(),
				ob3 = new P179_MyInteger2();
		ob1.val= 3; ob2.val = 5; ob3.val = 10;
		
		int x = ob1.add(ob3);
		System.out.println("결과1 : " + x);
		int y = ob2.add(ob3);
		System.out.println("결과2 : "+ y);
	}

}
