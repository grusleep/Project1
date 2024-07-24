#include <iostream>
using namespace std;

struct People 
{
	int age;
	int height;
	char name[256];
};

class cPeople 
{
public:
	int age;
	int height;

private:
	char name[256];
};

int main() 
{
	People chanwoo;
	chanwoo.age = 20;


	cPeople gyeommi;

	return 0;
}