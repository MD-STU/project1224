package 민덕현1011;

public class P239_ConstructorExample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		P239_Cat c = new P239_Cat();
		
		System.out.println(c.toString() + "의 몸무게는 " + c.getSize());
	}

}
class P239_Cat{
	int size;
	String name;
	public int getSize() {
		return size;
	}
	public String toString() {
		return name;
	}
}