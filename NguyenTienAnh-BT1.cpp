#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>

void Taongaunhien(int a[],int &m,int &n){
	cout << "Nhap m:";
	cin >> m;
	do{
	cout << "Nhap so phan tu cua mang:";
	cin >> n;
	}while (n>m);//dieu kien n<m
	srand(time(NULL));
	for(int i=0; i<n; i++)
			a[i]=1+rand()%m;// random so tu 1->m
}
void Xuat(int a[], int m,int n){
	for(int i=0; i<n; i++){
			cout<< a[i]<<"\t";
	}
}
int main(){
int m,n,a[100];
Taongaunhien(a,m,n);
Xuat(a,m,n);
}
