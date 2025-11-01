package 민덕현1101;

public class P267_ProgramBasic {
	public static void main(String[] args) throws Throwable {
		// TODO Auto-generated method stub
		P267_Rectangle r;
		r = new P267_Rectangle();
	}
}

class P267_Shape {
	private int x, y;

	public P267_Shape() {
		this(0, 0);
		System.out.println("Shape 생성자");
	}

	public P267_Shape(int xloc, int yloc) {
		x = xloc;
		y = yloc;
		System.out.println("Shape 유인 생성자");
	}
}

class P267_Rectangle extends P267_Shape {
	private int width, height;

	public P267_Rectangle() {
		this(0, 0, 0, 0);
		System.out.println("Rectangle 생성자");
	}

	public P267_Rectangle(int x, int y, int w, int h) {
		super(x, y);
		width = w;
		height = h;
		System.out.println("Rectangle 유인 생성자");
	}
}