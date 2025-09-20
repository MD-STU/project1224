package 민덕현0920;
class P214_SharedData{
	private static int sharedVariable;
	public final static int sharedConstant = 100;
	public static int getSharedVariable() {
		return sharedVariable;
	}
	public static void setSharedVariable(int s) {
		sharedVariable = s;
	}
}

class A {

	public void updateData() {
		System.out.println("상수 : " + P214_SharedData.sharedConstant);
		P214_SharedData.setSharedVariable(5);
	}
}

class B {
	public void readData() {
		System.out.println("상수 : " + P214_SharedData.sharedConstant);
		System.out.println(P214_SharedData.getSharedVariable());
	}
}

public class P215_SharedTest {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		A ob1 = new A();
		ob1.updateData();
		B ob2 = new B();
		ob2.readData();
	}

}
