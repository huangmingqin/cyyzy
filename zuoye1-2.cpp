#include<iostream.h>
void main()
{
	int i,y,x;
	y=1,x=10;
	cout<<"������һ��������";
	cin>>i;
	while(i>=x)
	{
		y++,x=x*10;
	}
	switch(y)
	{
	case 1:cout<<"������С��10\n";break;
	case 2:cout<<"��������10��99֮��\n";break;
	case 3:cout<<"��������100��999֮��\n";break;
	default:cout<<"����������1000������\n";break;
	}
}
