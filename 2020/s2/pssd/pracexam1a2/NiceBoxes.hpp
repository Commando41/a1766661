using namespace std;

class NiceBoxes{
	public:
		int minRemove(int a, int b, int c){
			int eaten = 0;
			while(b >= c){
				b -= 1;
				eaten++;
			}
		
			while(a >= b){
				a -= 1;
				eaten++;
			}
			if(a > 0 && b > 0){
				return eaten;
			}

		return -1;
	}
};
