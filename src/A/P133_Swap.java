package A;

public class P133_Swap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] array = {10,20};
		
		print(array);
		swap(array,0,1);
		
	}
	
	public static void swap(final int[] arr, final int pos1, final int pos2) {
		final int temp = arr[pos1];
		arr[pos1] = arr[pos2];
		arr[pos2] = temp;
	}
	
	public void print(int[] array) {
		for(int I=0; I < array.length; I++) {
			System.out.println(array[I] + " ");
		}
	}

}
