package 민덕현0920;

public class P216_SharedTest {
		private int sharedVariable;
		public final int sharedConstant = 100;
		
		public static void main(String[] args) {
			P216_SharedTest app = new P216_SharedTest();
			P216_SharedTest.A ob1 = app.new A();
			ob1.updateDate();
			P216_SharedTest.B ob2 = app.new B();
			ob2.readData();
		}
		
		class A {
			public void updateDate() {
				System.out.println("상수 : " + sharedConstant);
				sharedVariable = 5;
			}
		}
		
		class B {
			public void readData() {
				System.out.println("상수 : " + sharedConstant);
				System.out.println(sharedVariable);
			}
		}
}
