package A;

import java.util.Arrays;

public class P122_ArrayTest {

	public static void main(String[] args) {
		int[] array = {1, 5, 3, 2, 4};
		
		for( int e: array) {
			System.out.println(e + "");
		}
		
		Arrays.sort(array);
		
		for(int e: array) {
			System.out.println(e + "");
		}
	}
		
}
