package 민덕현0920;

public class P229_MyCar {
		public static void main(String[] args) {
			P229_Car car = new P229_Car();
			car.setSpeed(80);
			car.honk();
			System.out.println("현재 속도는 :" + car.getSpeed());
		}
}

class  P229_Car{
	
	 private int speed;
	 
	
	 public int getSpeed() {
		 return speed;
	 }
	
	 
	 public void setSpeed(int s) {
		 speed = s;
	 }
	 
	 public void honk() {
		 System.out.println("빵빵!");
	 }
}