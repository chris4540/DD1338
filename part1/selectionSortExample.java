import java.util.Arrays;

class selectionSortExample {
	public static void main(String args[])
	{
		int[] lst = {4,9,7,1,3,6,5};
		System.out.println("Before sorting: ");
		System.out.println(Arrays.toString(lst));

		// sort the list
		selectionSort(lst);
		System.out.println("After sorting: ");
		System.out.println(Arrays.toString(lst));

	}

	/*
	* Selection sort
	* Approx. execution: n + (n-1) + ... + 1 = n(n-1)/2
	* The time complexity = O(n**2)
	*/
	static void selectionSort(int[] lst) {
		// get the length
		int n = lst.length;
		for (int i = 0; i < n; i++) {
			int index = 0;  // index to mark sorted part
			int smallest = lst[i];  // smallest value of the unsorted part
			for (int j = i; j < n; j++) {
				if (lst[j] < smallest) {
					smallest = lst[j];
					index = j;
				}
				// do swapping
				int temp = lst[i];
				lst[i] = smallest;
				lst[index] = temp;
		 	}
	   }

	}
}

