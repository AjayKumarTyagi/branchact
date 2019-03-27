#include<stdio.h>
using namespace std;
class stack
{
	int stck[9999],top=-1;
	public:
	void push(int val);
	void pop()
	{
		if(top==-1)
			cout<<"nothing to pop"<<endl;
		else
			top=top-1;
	}
	void display();
};
int main()
{
	stack s;
	s.push(45);
	s.push(86);
	s.push(27);
	s.display();
	s.pop();
	s.display();
	s.pop();
	s.display();
}
