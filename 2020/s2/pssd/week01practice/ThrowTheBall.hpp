using namespace std;

class ThrowTheBall {
	public:
		int timesThrown(int N, int M, int L){
			//Initialise all the variables and array!
			int d, i = 0;
			int players[N];
			for(d = 0; d < N; d++){
				players[d] = 0;
			}
			d = 0;  //  Variable d will be used as the counter
			players[0] = 1;
			while(players[i] < M){ //Loops until a player gets the ball m times
				d++;
				if(players[i] % 2){ //If player received the ball even times
					i += L;			//Passes the ball to the left! (Clockwise)
				}else{
					i -= L;			//Otherwise passes the ball to the right
				}										//(Anti-Clockwise)
				if(i < 0){	//Checks if index is within range
					i+=N;			//When less than 1, increase by N
				}else if(i > N-1){
					i-=N;			//When greater than N, decrease by N 
				}
				players[i]++; //Increments the amount player held the ball
			}
			return d;	
		}
};