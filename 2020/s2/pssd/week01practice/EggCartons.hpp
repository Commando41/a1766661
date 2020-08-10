using namespace std;

class EggCartons{
	public:
		int minCartons(int n){

			int cartons = 0;
			while(n >= 0 && (n % 8) != 0){
				cartons++;
				n = n - 6;
			}
			if(n >= 0){
				cartons = cartons + n / 8;
				return cartons;
			}			

			return -1;
		}
			
};