#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Taongaunhien(int a[][100],int &n,int &m){
	do{
	cout << "Nhap n: ";
	cin >> n;
	}while (n<3 || n>10);
	m=n;
	srand((unsigned)time(NULL));
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			a[i][j]=rand()%101;
}
void Xuat(int a[][100], int n,int m){
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			cout<< a[i][j] <<"\t";
		cout<<endl<<endl;
	}
}
void XoaDong(int a[][100],int &n,int &m){
	int dong;
	do{
	cout << "Nhap dong can xoa:";
	cin >>dong;
	}while (dong >=n || dong<0);
	for(int i=dong;i<n-1;i++)
		for(int j=0;j<=m;j++){
			a[i][j]=a[i+1][j];
		}
		n--;
	Xuat(a,n,m);
}
void XoaCot(int a[][100],int &n,int &m){
	int cot;
	do{
	cout << "Nhap cot can xoa:";
	cin >>cot;
	}while (cot >=n || cot<0);
	for(int i=0;i<n;i++)
		for(int j=cot;j<m-1;j++){
			a[i][j]=a[i][j+1];
		}
		m--;
	Xuat(a,n,m);
}
int DoiXung(int a[][100],int &n,int &m){
	for (int i = 0; i < n-1; i ++)
		for(int j = i+1; j < m; j++)
			if (a[i][j] != a[j][i])
				return 0;
	 return 1;
}
int main(){
	int a[100][100];
	int n,m;
	Taongaunhien(a,n,m);
	Xuat(a,n,m); 
	XoaDong(a,n,m);
	XoaCot(a,n,m);
	if(DoiXung(a,n,m)==0)
		cout << "Ma tran tren khong doi xung!";
	else 
		cout << "Ma tran tren doi xung!";
	return 0;
}

