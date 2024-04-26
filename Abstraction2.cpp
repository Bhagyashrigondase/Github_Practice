#include<iostream>
using namespace std;

class implementAbstraction
{
	private:
		int a,b,c;
	public:
		void sum(int x,int y)
		{
			a=x;
			b=y;
			c=a+b;
			cout<<"Sum of two number is="<<c<<endl;
		}
};
 int main()
 {
 	implementAbstraction obj;
 	obj.sum(5,4);
 	return 0;
 }
