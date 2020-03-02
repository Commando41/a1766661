#include<iostream>
#include<string>
using namespace std;


class bone
{
	public:
	string bname;

	bone()
	{
	}
	void setname(string lname)
	{
		bname = lname;
	}

	string getname()
	{
		return bname;
	}

	~bone()
	{
	}
};
class Animals
{
	public:
	string name;
	float weight;
	int age;

	Animals()
	{
	bone *bell = new bone();
	
	}
	
	void printname()
	{
	cout << "Animal's name is " << name << " with bone " << bell->getname() << endl;
	}
	
	void setname(string pname)
	{
		name = pname;
	}

	string getname()
	{
		return name;
	}
	~Animals()
	{
	delete bell;
	}
};
int main()
{

	Animals *animal1;
	animal1 = new Animals();
	animal1->setname("Landy");
	bell->setname("Long");

	animal1->printname();
	delete animal1;
	return 0;
}

