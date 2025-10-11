package 민덕현1011;

public class P247_ConstructorExample {

	public static void main(String[] args) throws Throwable {
		// TODO Auto-generated method stub
		P247_Cat c = new P247_Cat("이쁜이",45);
		P247_Cat c2 = new P247_Cat();
		
		System.out.println(c.toString() + "의 몸무게는 "+ c.getSize());
		System.out.println(c2.toString() + "의 몸무게는 "+ c2.getSize());
		
		c.finalize();
		c2.finalize();
	}

}


class P247_Cat{
	int size;
	String name;
	public P247_Cat() {
		this("영순이", 50);
	}
	public P247_Cat(String n, int s) {
		name = n;
		size = s;
	}
	
	
	public int getSize() {
		return size;
	}
	public String toString() {
		return name;
	}
	public void finalize() throws Throwable{
		System.out.println(name + "고양이가 소멸됨");
		
	}
}