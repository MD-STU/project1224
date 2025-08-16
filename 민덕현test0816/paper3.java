package 민덕현test0816;

public class paper3 {
	public static void main(String[] args) {
		int hap = 0;
		int hap_imsi =0;
		for(int i = 1;i<=10;i++) {
			hap_imsi += i;
			hap+=hap_imsi;
		}
		System.out.println("총합 : " + hap);
	}
}
