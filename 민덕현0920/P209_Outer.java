package 민덕현0920;

public class P209_Outer {
	int num = 10;

	private class Inner {
		private int x = 5;

		public void print() {
			System.out.println("This is an inner class : " + num);
		}
	}

	void display_Inner() {
		Inner inner = new Inner();
		System.out.println(inner.x);
		inner.print();
	}
}
