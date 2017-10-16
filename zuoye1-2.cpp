#include<iostream.h>
void main()
{
	int i,y,x;
	y=1,x=10;
	cout<<"请输入一个整数：";
	cin>>i;
	while(i>=x)
	{
		y++,x=x*10;
	}
	switch(y)
	{
	case 1:cout<<"该整数小于10\n";break;
	case 2:cout<<"该整数在10至99之间\n";break;
	case 3:cout<<"该整数在100至999之间\n";break;
	default:cout<<"该整数等于1000或以上\n";break;
	}
}
