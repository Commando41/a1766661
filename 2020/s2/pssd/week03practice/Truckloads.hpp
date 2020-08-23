using namespace std;
#include <cmath>

class Truckloads{
	public:
		int trucks = 0;
		int numTrucks(int numCrates, int loadSize){

		if(numCrates < loadSize)
			return 1;

		if(numCrates % 2)
			return numTrucks((numCrates-1)/2, loadSize) + numTrucks((numCrates+1)/2, loadSize);

		return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2, loadSize);
		}
};
