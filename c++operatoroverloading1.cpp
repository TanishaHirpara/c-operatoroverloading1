#include<iostream>
using namespace std;

class Sub{
	public : 
	int x;
	void setdata(int x)
	{
		this->x = x;
		
		
	}

	 operator<(Sub& sub)
	{
	     return x < sub.x;
		 		
	}
};
main()
{
	Sub s,s1,s2,s3;
	s.setdata(4);
	s1.setdata(5);
	if(s<s1)
	{
		cout<<"s1 is big "<<endl;
	}
	else
	{
		cout<<"s is big "<<endl;
	}
	
	
 }
