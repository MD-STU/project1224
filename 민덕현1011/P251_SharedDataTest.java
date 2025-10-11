package 민덕현1011;

import java.util.Random;

public class P251_SharedDataTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		P251_SharedData buf = new P251_SharedData();
		P251_Consumer c = new P251_Consumer(buf);
		P251_Producer p = new P251_Producer(buf);
		
		for(int i = 0; i < 3; i++) {
			p.produce();
			c.consume();
		}
	}

}

class P251_SharedData{
	private int count = 0;
	public final int MaxSize = 100;
	private int[] buffer = new int[MaxSize];
	public int getVal() {
		if(count != 0)
			return buffer[--count];
		else 
			return -1;
	}
	public int setVal(int s) {
		if(count !=MaxSize) {
			buffer[count++] = s;
			return count;
		}
		else 
			return -1;
	}
}

class P251_Producer{
	private Random generator = new Random();
	private P251_SharedData buffer;
	public P251_Producer(P251_SharedData s) {
		buffer = s;
	}
	public void produce() {
		int loop = generator.nextInt(4) + 2;
		int res, val;
		for(int i = 0; i< loop; i++) {
			val = generator.nextInt(101);
			res = buffer.setVal(val);
			if(res < 0) {
				System.out.println("write : 버퍼가 꽉 차 데이터를 추가할 수 없습니다.");
			}
			else 
				System.out.println("write : " + val);
		}
	}
}
class P251_Consumer{
	private Random generator = new Random();
	private P251_SharedData buffer;
	public P251_Consumer(P251_SharedData s) {
		buffer = s;
	}
	
	public void consume() {
		int loop = generator.nextInt(4)+2;
		int res;
		for(int i = 0; i<loop;i++) {
			res = buffer.getVal();
			if(res < 0)
				System.out.println("read : 데이터가 없습니다.");
			else
				System.out.println("read :  "+ res);
		}
	}
}
























