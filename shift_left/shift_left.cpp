// shift_left.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;
#define LEN 50
void method1(int* a,int n);
void method1(int* a,int n)
{
	int *p=new int [n];
	for(int i=0;i<n;i++)
	{
		p[i]=a[i];
	}
	for(int i=0;i<(LEN-n);i++)
	{
		a[i]=a[(i+n)];
	}
	for(int i=0;i<n;i++)
	{
		a[(i+LEN-n)]=p[i];
	}
	cout<<"�����"<<endl;
	for(int i=0;i<LEN;i++)
	{
		a[i]=i+1;
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int a[LEN]={0};
	for(int i=0;i<LEN;i++)
	{
		a[i]=i+1;
		cout<<"�����"<<endl;
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
	method1(a,4);
	return 0;
}

