using namespace std;

class ChangingString{

	public:
	int distance(string A, string B, int K){

	int lena = A.size();
	int lenb = B.size();
	int arr[lena] = { 0 };
	int i, m, l = 0, d = 1;

	for(i = 0; i < lena; i++){
		arr[i] = A[i] - B[i];
	}

	while(l = 0){
		l = 1;
		for(i = 0; i < lena - d; i++){
			if(arr[i] < arr[i+1]){
				m = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = m;
				d++;
				l = 0;
			}
			
		}
	}
	for(i = 0; i < lena; i++){
		if(K != 0){
			if(arr[i] != 0){
				arr[i] = 0;
				K--;
			}
		}else{
			break;
		}	
	}

	int sum = 0;
	if(K != 0){
		for(i = 0; i < lena; i++){
			if(arr[i] == 0){
				arr[i] = 1;
				K--;
			}
			if(K == 0) { break;}	

	}

	for(i = 0; i < lena; i++){
		sum += arr[i];
	}

	return sum;
	}
};
