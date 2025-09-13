package 민덕현0913;

public class P195_MyRectangle {
	private int x, y;
	private int width, height;

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

	public int getWidth() {
		return width;
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
		return width * height;
	}
}
