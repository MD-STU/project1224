package 민덕현test0816;

public class paper4 {
	public static void main(String[] args) {
		int hap = 0;
		int num = 1;
		int count = 1;
		while(true) {
			hap+=count*num;
			num*=-1;
			if(hap>=100) break;
				
			count+=1;
		}
		System.out.println(count);
	}
}
