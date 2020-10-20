class InsertionSort{
    
	public static void insertionSort(int[] list){
		int n = list.length;

		for (int i = 1; i < n; i++){
			int key = list[i];
			int j = i-1;

			while (j >= 0 && list[j]>key){
				list[j+1] = list[j];
				j = j -1;
			}
			list[j+1] = key;
		}
	}

    public static void main(String[] args) {
        int[] arr = new int[] {2, 3, 0, 4};
        insertionSort(arr);
        for(int element: arr) {
            System.out.println(element);
        }
    }
}