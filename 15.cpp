#include <iostream>
using namespace std ;

int main (int argc,char** argv)
{
	int hour,min,sec,time,a,b;
	cout<<"輸入時間"<< endl;
	cout<<"小時:";
	cin>>hour;
	cout<<"分鐘:";
	cin>>min;
	cout<<"秒數:";
	cin>>sec;
	a=hour*3600;
	b=min*60;
	time=a+b+sec;
	if(time<25200) 
	{
		cout<<"還沒上課"<<endl; 
	}
	else if (time>61200)
	{
		cout<<"放學了"<<endl;	
	} 
	else
	{
		cout<<"上課中"<<endl; 
	}
	system("pause");
	return 0;
}
