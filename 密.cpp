#include "stdafx.h"
#include<iostream>
using namespace std;

int mi(int x,int n)
{
	int y=1;
	if(y<=n)
	{
		x*=x;
		y++;
	}
	return x;

}
int mian()
{
	int n;
	int y=1;
	int x=1;
	cout<<"������y��ֵ��";
	cin>>n;
	cout<<"������x��ֵ��";
	cin>>x;

	if(1<=y&&y<=n){
		cout<<"x��"<<y<<"�η���"<<mi(x,n);
    }
	return 0;
}

