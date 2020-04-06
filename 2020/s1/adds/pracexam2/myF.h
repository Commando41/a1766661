#ifndef MYF_H
#define MYF_H
#include <array>
using namespace std;

class myF
{
	public:
		myF();
		int solve_mem(int n);
		int solve(int n);
		~myF();
	private:
		array<int, 150> record;
};
#endif