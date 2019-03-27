#include<stdio.h>
using namespace std;
class stack
{
	int stck[9999],top=-1;
	public:
	void push(int val);
	void pop();
	void display();
};
int main()
{
	stack s;
	s.push(45);  //pushed 45
	s.push(86);  //pushed 86
	s.push(27);  //pushed 27
	s.display(); //display stack
	s.pop();     //poped 27
	s.display(); //display stack
	s.pop();     //poped 86
	s.display(); //display stack
}
