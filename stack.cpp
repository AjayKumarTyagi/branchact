#include<stdio.h>
using namespace std;
class stack
{
	int stck[9999],top=-1;
	public:
	void push();
	void pop();
	void display();
};
int main()
{
	stack s;
	s.push();
	s.pop();
	s.display();
}
