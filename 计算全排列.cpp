#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{   
	int a=1,b=1,i=1;
	int A_a=1,A_b=1,A_ab=1,C_ab=1;
	
    cout<<"请输入a的值：";
	cin>>A_a;
	cout<<"请输入b的值：";
	cin>>A_b;
	
	C_ab=A_a/(A_b*A_ab);
	
	while(i=a;i>=1;i--)//计算a的全排列
	{
		A_a*=A_b;
	}
	
	while(i=b;i>=1;i--)//计算b的全排列
	{
		A_b*=A_b;
	}

	while(i=a-b;i>=1;i--)//计算a-b的全排列
	{
		A_ab*=A_ab;
	}
	cout<<"从A个元素中取B个元素的组合个数是："<<C_ab;
}

