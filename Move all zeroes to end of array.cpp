	void pushZerosToEnd(int arr[], int n) {
    int i = 0;
     for(int j = 0; j<n; j++){
         if(arr[j] !=0){
             swap(arr[j], arr[i++]);
         }
     }
	}
