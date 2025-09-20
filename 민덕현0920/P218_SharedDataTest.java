package 민덕현0920;

import java.util.Random;

class P218_SharedData {
	private static int count = 0;
	public final static int MaxSize = 100;
	private static int[] buffer = new int[MaxSize];

	public static int getVal() { 
		if (count != 0) // 22
			return buffer[--count];//23
		else//23
			return -1;//24
	}

	public static int setVal(int s) {
		if (count != MaxSize) { // 10
			buffer[count++] = s; // 11
			return count; // 12
		} else// 11
			return -1;//12
	}
}

class P217_Producer {
	private Random generator = new Random();

	public void produce() { 
		int loop = generator.nextInt(4) + 2;//5
		int res, val;//6
		for (int i = 0; i < loop; i++) { //7 //16
			val = generator.nextInt(101); //8
			res = P218_SharedData.setVal(val);//9
			if (res < 0) // 13
				System.out.println("write : 버퍼가 꽉 차 데이터를 추가할 수 없습니다.");// 14
			else// 14
				System.out.println("write : " + val);//15
		}
	}
}

class P218_Consumer {
	private Random generator = new Random();

	public void consume() {
		int loop = generator.nextInt(4) + 2; // 18
		int res;// 19
		for (int i = 0; i < loop; i++) { //20 //28
			res = P218_SharedData.getVal();// 21
			if (res < 0) // 25
				System.out.println("read : 테이터가 없습니다.");//26
			else// 26
				System.out.println("read : " + res);//27
		}
	}
}

public class P218_SharedDataTest {
	public static void main(String[] args) {
		P218_Consumer c = new P218_Consumer();//1
		P217_Producer p = new P217_Producer();//2

		for (int i = 0; i < 3; i++) { //3 //29
			p.produce(); //4
			c.consume();// 17
		}
	}
}
