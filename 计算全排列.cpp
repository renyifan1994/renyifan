#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{   
	int a=1,b=1,i=1;
	int A_a=1,A_b=1,A_ab=1,C_ab=1;
	
    cout<<"������a��ֵ��";
	cin>>A_a;
	cout<<"������b��ֵ��";
	cin>>A_b;
	
	C_ab=A_a/(A_b*A_ab);
	
	while(i=a;i>=1;i--)//����a��ȫ����
	{
		A_a*=A_b;
	}
	
	while(i=b;i>=1;i--)//����b��ȫ����
	{
		A_b*=A_b;
	}

	while(i=a-b;i>=1;i--)//����a-b��ȫ����
	{
		A_ab*=A_ab;
	}
	cout<<"��A��Ԫ����ȡB��Ԫ�ص���ϸ����ǣ�"<<C_ab;
}

