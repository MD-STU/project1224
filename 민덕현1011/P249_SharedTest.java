package 민덕현1011;

public class P249_SharedTest {
	public static void main(String[] args) {
		P249_SharedData shareddata = new P249_SharedData();
		P249_A ob1 = new P249_A(shareddata);
		ob1.updateData();
		P249_B ob2 = new P249_B(shareddata);
		ob2.readData();
	}
}

class P249_SharedData {
	private int sharedVariable;
	public final int sharedConstant = 100; //상수

	public int getSharedVariable() {
		return sharedVariable;
	}

	public void setSharedVariable(int s) {
		sharedVariable = s;
	}
}

class P249_A{
	P249_SharedData shareddata;
	public P249_A(P249_SharedData shareddata) {
		this.shareddata = shareddata;
	}
	public void updateData() {
		System.out.println("상수 : " + shareddata.sharedConstant);
		shareddata.setSharedVariable(5);
	}
}

class P249_B{
	P249_SharedData shareddata;
	public P249_B(P249_SharedData shareddata) {
		this.shareddata = shareddata;
	}
	public void readData() {
		System.out.println("상수 : " + shareddata.sharedConstant);
		System.out.println(shareddata.getSharedVariable());
	}
}























