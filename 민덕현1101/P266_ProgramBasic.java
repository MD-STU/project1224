package 민덕현1101;

public class P266_ProgramBasic {

	public static void main(String[] args) throws Throwable {
		// TODO Auto-generated method stub
		P266_Rectangle r;
		r = new P266_Rectangle();
	}

}

class P266_Shape{
	private int x,y;
	public P266_Shape() {
		System.out.println("Shape 생성자");
	}
	public void P266_finalize() {
		System.out.println("Shape  소멸자");
	}
}

class P266_Rectangle extends P266_Shape{
	private int width, height;
	public P266_Rectangle() {
		System.out.println("Rectangle 생성자");
	}
	public void P266_finalize() {
		System.out.println("Rectangle 소멸자");
	}
}