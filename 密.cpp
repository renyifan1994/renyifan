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
	cout<<"请输入y的值：";
	cin>>n;
	cout<<"请输入x的值：";
	cin>>x;

	if(1<=y&&y<=n){
		cout<<"x的"<<y<<"次方是"<<mi(x,n);
    }
	return 0;
}

