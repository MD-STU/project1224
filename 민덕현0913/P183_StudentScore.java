package 민덕현0913;

public class P183_StudentScore {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int korSum = 0, engSum = 0, mathSum = 0;
		double totalSum = 0.0, korAvg, engAvg, mathAvg, totalAvg;
		
		P182_Student[] students = new P182_Student[3];
		students[0] = new P182_Student();
		students[0].setInfo("bmkim1", 2016001, 70, 80, 90);
		P182_Student.count++;
		students[1] = new P182_Student();
		students[1].setInfo("bmkim2", 2016002, 60, 70, 80);
		P182_Student.count++;
		students[2] = new P182_Student();
		students[2].setInfo("bmkim3", 2016003, 50, 60, 70);
		P182_Student.count++;
		
		for (int i = 0; i < 3; i++) {
			System.out.println(students[i].getInfo());
			korSum += students[i].kor;
			engSum += students[i].eng;
			mathSum += students[i].math;
			totalSum += students[i].getAverage();
		}
		
		korAvg = ((double)korSum) /P182_Student.count ;
		engAvg = ((double)engSum) / P182_Student.count;
		mathAvg = ((double)mathSum) / P182_Student.count;
		totalAvg = totalSum / P182_Student.count;
		System.out.println("국어 평균 : " + korAvg);
		System.out.println("영어 평균 : " + engAvg);
		System.out.println("수학 평균 : " + mathAvg);
		System.out.println("전체 평균 : " + totalAvg);
	}

}

