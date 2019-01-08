#include <iostream>
using namespace std;
#include<math.h>
int main(){
 int a, b;
 cout << "\nNhap a: ";
 cin >> a;
 cout << "\nNhap b: ";
 cin >> b;

 cout << "\t-------MENU-------";
 cout << "\n\t1. Tinh Tong a+b.";
 cout << "\n\t2. Tinh Hieu a-b.";
 cout << "\n\t3. Tinh Tich a*b.";
 cout << "\n\t4. Tinh Thuong a/b.";
 cout << "\n\t5. Chia lay du.";
 cout << "\n\t0. Thoat khoi truong trinh! ";
 cout << "\n\t-------END--------";
 int luachon;
 while (true)
 {
  cout << "\n\nNhap lua chon cua ban: ";
  cin >> luachon;
  if (luachon == 1){
   cout << "Tong " << a << " + " << b << " = " << a+b;
  }
  else if (luachon == 2){
   cout << "Hieu " ;
   if(a>b) cout << a << " - " << b << " = " << a - b;
   else cout << b << " - " << a << " = " << b - a;
  }
  else if (luachon == 3){
   cout << "Tich " << a << " * " << b << " = " << a * b;
  }
  else if (luachon == 4){
   cout << "Thuong " ;
   if(a>b) cout << a << " / " << b << " = " << float(a / b);
   else cout << b << " / " << a << " = " << float(b / a);
  }
  else if (luachon == 5){
   cout << "Chia lay du " ;
   if(a>b) cout << a << " % " << b << " = " << a%b;
   else cout << b << " % " << a << " = " << a%b;
  }
  else if (luachon == 0)
	break;
  else
   cout << "\nChon loi! Xin kiem tra lai: ";
 }
}
