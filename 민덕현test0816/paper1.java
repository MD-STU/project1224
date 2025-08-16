package 민덕현test0816;

public class paper1 {
	public static void main(String[] args) {
		int x=15;
		if(x>10&&x<20)System.out.println("[1-1]1.");
		
		char ch = 'a';
		if(ch!=' '||ch!='\t')System.out.println("[1-1]2.");
		if(ch!='x'||ch!='X')System.out.println("[1-1]3.");
		if(ch>='0'&&ch<='9')System.out.println("[1-1]4.");
		if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))System.out.println("[1-1]5.");
		
		int year = 400;
		if(year%400==0||(year%4==0&&year%100!=0))System.out.println("[1-1]6.");
		
		boolean powerOn = false;
		if(!powerOn)System.out.println("[1-1]7.");
		String str = "yes";
		if(str.equals("yes"))System.out.println("[1-1]8.");
	}
}
