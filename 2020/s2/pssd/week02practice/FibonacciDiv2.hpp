using namespace std;
#include <algorithm>

class FibonacciDiv2{
public:

	int find(int N){
		int fib[31];
		fib[0] = 0;
		fib[1] = 1;
		fib[15] = 610;
		fib[16] = 987;
		fib[30] = 832040;
		int i;
		for(i = 2; i < 15; i++){
			fib[i] = fib[i-2] + fib[i-1];
			fib[i+15] = fib[i+13] + fib[i+14];
		}

		for(i = 0; i < 30; i++){
			if(N >= fib[i] && N < fib[i+1])
				return min(N-fib[i],fib[i+1]-N);
		}

		return N - fib[30];
	}
};