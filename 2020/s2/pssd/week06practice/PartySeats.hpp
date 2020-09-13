using namespace std;
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
class PartySeats{
	public:
		vector<string> seating(vector<string> attendees){
			vector<string> boys, girls;
			for(int i = 0; i < attendees.size(); i++){
				stringstream ss;
				ss << attendees[i];
				string name, bio_logical_sex;
				ss >> name >> bio_logical_sex;
				if(bio_logical_sex == "girl")
					girls.push_back(name);
				else
					boys.push_back(name);
			}
			if(girls.size() != boys.size() || girls.size() == 1 || boys.size() == 1 || boys.size() % 2 != 0 || girls.size() % 2 != 0)
				return {};
			for(int d = 1; d < girls.size(); d++){
				for(int i = 0; i < boys.size()-d; i++){
					if(boys[i+1] < boys[i])
						swap(boys[i+1],boys[i]);
					if(girls[i] > girls[i+1])
						swap(girls[i],girls[i+1]);
				}	
			}
			attendees.clear();
			attendees.push_back("HOST");
			int alt = 0;
			for(int i = 0; i < boys.size(); i++){
				if(i == boys.size()/2){
					alt = 1;
					attendees.push_back("HOSTESS");
				}
				if(alt == 0){
					attendees.push_back(girls[i]);
					attendees.push_back(boys[i]);
				}else{
					attendees.push_back(boys[i]);
					attendees.push_back(girls[i]);
				}
			}
			return attendees;
		}	
};