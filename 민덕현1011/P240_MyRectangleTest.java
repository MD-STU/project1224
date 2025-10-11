package 민덕현1011;

public class P240_MyRectangleTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		P240_MyRectangle r1 = new P240_MyRectangle();
		P240_MyRectangle r2 = new P240_MyRectangle(new P240_MyPoint(3,3),5,6);
		P240_MyRectangle r3 = new P240_MyRectangle(3,3,6,6);
		
		System.out.println("r1 면적은 " + r1.getArea() + "입니다.");
		System.out.println("r2 면적은 " + r2.getArea() + "입니다.");
		System.out.println("r3 면적은 " + r3.getArea() + "입니다.");
	}

}

class P240_MyPoint{
	private int x,y;
	
	public P240_MyPoint() {
		x = 0;
		y = 0;
	}
	public P240_MyPoint(int a, int b) {
		x = a;
		y = b;
	}
	public int getX() {
		return x;
	}
	public void setX(int newX) {
		x = newX;
	}
	public int getY() {
		return y;
	}
	public void setY(int newY) {
		y = newY;
	}
}

class P240_MyRectangle{
	private P240_MyPoint corner;
	private int width, height;
	
	public P240_MyRectangle() {
		corner = new P240_MyPoint(0,0);
		width=0; height = 0;
	}
	public P240_MyRectangle(P240_MyPoint p, int w, int h) {
		corner = p;
		width =w; height = h;
	}
	public P240_MyRectangle(int x, int y, int w, int h) {
		corner = new P240_MyPoint(x,y);
		width = w; height = h;
	}
	
	
	
	public P240_MyPoint getPoint() {
		return corner;
	}
	public void setPoint(P240_MyPoint newP) {
		corner = newP;
	}
	public int getWidth() {
		return  width;
	}
	public void setWidth(int newW) {
		width = newW;
	}
	public int getHeight() {
		return height;
	}
	public void setHeight(int newY) {
		height = newY;
	}
	public void resize(int newW, int newH) {
		width = newW;
		height = newH;
	}
	public int getArea() {
		return width *height;
	}
}

















