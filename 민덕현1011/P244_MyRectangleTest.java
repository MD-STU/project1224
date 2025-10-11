package 민덕현1011;

public class P244_MyRectangleTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		P244_MyRectangle r1 = new P244_MyRectangle();
		P244_MyRectangle r2 = new P244_MyRectangle(new P244_MyPoint(3,3),5,6);
		P244_MyRectangle r3 = new P244_MyRectangle(3,3,6,6);
		
		System.out.println("r1 면적은 " + r1.getArea() + "입니다.");
		System.out.println("r2 면적은 " + r2.getArea() + "입니다.");
		System.out.println("r3 면적은 " + r3.getArea() + "입니다.");
	}

}

class P244_MyPoint{
	private int x,y;
	
	public P244_MyPoint() {
		this(0,0);
	}
	public P244_MyPoint(int x, int y) {
		this.x = x; 
		this.y = y;
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

class P244_MyRectangle{
	private P244_MyPoint corner;
	private int width, height;
	
	public P244_MyRectangle() {
		this(new P244_MyPoint(0,0), 0, 0); 
	}
	public P244_MyRectangle(P244_MyPoint p, int w, int h) {
		corner = p;
		width =w; height = h;
	}
	public P244_MyRectangle(int x, int y, int w, int h) {
		corner = new P244_MyPoint(x,y);
		width = w; height = h;
	}
	
	
	
	public P244_MyPoint getPoint() {
		return corner;
	}
	public void setPoint(P244_MyPoint newP) {
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
