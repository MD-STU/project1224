package 민덕현0920;

class P208_Outer {
	int num = 10;

	class P209_Inner {
		public void print() {
			System.out.println("This is an inner class : " + num);
		}
	}

	void display_Inner() {
		P209_Inner inner = new P209_Inner();
		inner.print();
	}
}