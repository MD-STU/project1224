package 민덕현0913;

public class P181_MyApp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		P181_StaticTest ob1 = new P181_StaticTest();
		P181_StaticTest ob2 = new P181_StaticTest();
		
		ob1.setValue(3);
		System.out.println(ob2.getValue());
		
		ob1.setInstVal(5);
		System.out.println(ob2.getInstVal());
		
		System.out.println(P181_StaticTest.value);
	}

}

class P181_StaticTest {
	static int value;
	int instVal;

	void setValue(int n) {
		value = n;
	}

	int getValue() {
		return value;
	}

	void setInstVal(int n) {
		instVal = n;
	}

	int getInstVal() {
		return instVal;
	}
}