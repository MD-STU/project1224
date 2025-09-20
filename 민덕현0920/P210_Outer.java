package 민덕현0920;

public class P210_Outer {
		int num = 10;
		
		void display_Inner() {
			class Inner{
				private int x = 5;
				public void print() {
					System.out.println("This is an inner class : " + num);
				}
			}
			
			Inner inner = new Inner();
			System.out.println(inner.x);
			inner.print();
		}
}
//
//public class P210_InnerTest{
//	public static void main(String[] args) {
//		P210_Outer outer = new P210_Outer();
//		
//		outer.display_Inner();
//	}
//}
