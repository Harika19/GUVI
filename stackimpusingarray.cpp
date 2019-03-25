//stack imp using arrays
#include <iostream>
using namespace std;
class stackimp{
	public:
		int a[100],top=-1;
		void push(int x)
		{
			if(top==99)
			{
				cout<<"stack is full its overflow"<<endl;
				return;
			}
			a[++top]=x;
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"stack is underflow"<<endl;
				return;
			}
			top--;
		}
		void display(){
			int i;
			for(i=0;i<top+1;i++)
			{
				cout<<a[i]<<endl;
			}
		}
};
int main()
{
	stackimp ob;
	ob.push(10);
	ob.push(20);
	ob.push(30);
	ob.display();
	ob.pop();
	ob.display();
	return 0;
	}
