package 민덕현1101;

import java.util.Calendar;
import java.util.Date;

class P263_Clock {
	public String getLocation() {
		return "한국";
	}

	int getHours() {
		int hour = Calendar.getInstance().get(Calendar.HOUR_OF_DAY);
		return hour;
	}

	int getMinutes() {
		long time = System.currentTimeMillis();
		Date date = new Date(time);
		int min = date.getMinutes();
		return min;
	}

	int getSeconds() {
		Date date = Calendar.getInstance().getTime();
		int sec = date.getSeconds();
		return sec;
	}
}

class P263_ForeignClock extends P263_Clock {
	String location;
	int timeDiff;

	@Override
	public String getLocation() {
		return location;
	}

	public P263_ForeignClock(String loc, int diff) {
		location = loc;
		timeDiff = diff;
	}

	@Override
	int getHours() {
		int local = super.getHours();
		int tmp = local + timeDiff;
		tmp = (tmp < 0) ? (24 + tmp) : tmp;
		return tmp;
	}

}

public class P263_ClockTest {
	public static void main(String[] args) {
		P263_Clock[] clocks = new P263_Clock[3];

		clocks[0] = new P263_Clock();
		clocks[1] = new P263_ForeignClock("Rome", 9);
		clocks[2] = new P263_ForeignClock("Tokyo", -7);
//		
//		System.out.println(korClock.getLocation() + " : " + 
//		korClock.getHours() + "시 " + korClock.getMinutes() +"분 " + romeClock.getSeconds() + "초 ");
//		System.out.println(romeClock.getLocation() + " : " + 
//		romeClock.getHours() + "시 " + romeClock.getMinutes() + "분 " + romeClock.getSeconds() + "초 ");
//		System.out.println(tokyoClock.getLocation() + " : " + 
//				tokyoClock.getHours() + "시 " + tokyoClock.getMinutes() + "분 " + tokyoClock.getSeconds() + "초 ");
//		
		for (int i = 0; i < 3; i++) {
			System.out.println(clocks[i].getLocation() + ":" + clocks[i].getHours()+"시 " 
		+clocks[i].getMinutes()+ "분 " + clocks[i].getSeconds()+"초 ");
		}
	}
}
