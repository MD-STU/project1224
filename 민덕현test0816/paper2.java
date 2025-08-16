package 민덕현test0816;

public class paper2 {
		public static void main(String[] args) {
			int hap = 0;
			for(int i = 1; i <=20;i++) {
				if(i%2==0||i%3==0) continue;
				else hap+=i;
			}
			System.out.println("총합 : " + hap);
		}
}
