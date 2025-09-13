package 민덕현0913;

public class P184_MyApp {
	int x = 3;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		P184_StaticTest.setValue(3);
		
		System.out.println(P184_StaticTest.getValue());
		
		P184_StaticTest ob1 = new P184_StaticTest();
		P184_StaticTest ob2 = new P184_StaticTest();
		
		ob1.setInstVal(5);
		System.out.println(ob2.getInstVal());
	}

}

class P184_StaticTest {
	static int value;
	int instVal;

	static void setValue(int n) {
		value = n;
	}

	static int getValue() {
		return value;
	}

	void setInstVal(int n) {
		instVal = n;
	}

	int getInstVal() {
		return instVal;
	}
}