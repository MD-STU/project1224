package 민덕현1011;

public class P235_ConstructorExample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		P235_Cat c = new P235_Cat();
		System.out.println(c.toString() + "의 몸무게는 " + c.getSize());
	}

}

class P235_Cat{
	int size;
	String name;
	public P235_Cat() {
		name = "영순이";
		size = 50;
	}
	public P235_Cat(String n, int s) {
		name = n;
		size = s;
	}
	
	
	public int getSize() {
		return size;
	}
	public String toString() {
		return name;
	}
}