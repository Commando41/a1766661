#ifndef MYF_H
#define MYF_H
using namespace std;

class myF
{
	public:
		myF();
		int solve_mem(int n);
		int solve(int n);
		~myF();
	private:
		int *record = new int[100];
};
#endif