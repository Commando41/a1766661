
using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    // your code for the problem
    int i, res = 0;//, leafy = leaf; 
    for(i = 0; i <= branch; i+=rest)
    {
        if(i % leaf == 0){
            res++;
        }
    }
    return res;  // return your result
  }
};