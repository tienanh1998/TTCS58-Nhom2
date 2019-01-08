
#include <winbgim.h> 
#include <iostream>
using namespace std;

class DuongThang{
	int x,y,x1,y1;
	public:
	void Ve(){
		cout << "Nhap toa do thu nhat !";
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap y: ";
		cin >> y;
		cout << "Nhap toa do thu 2!";
		cout << "Nhap x1: ";
		cin >> x1;
		cout << "Nhap y1: ";
		cin >> y1;
		initwindow(1000, 1000);	//man hinh in ra		
   		cleardevice();
		setcolor(2);// mau cua hinh
		line(x,y, x1, y1);
		while(!kbhit()) delay(1);
	}
};
class TamGiac{
	int x,y,x1,y1;
	public:
	void Ve(){
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap y: ";
		cin >> y;
		cout << "Nhap x1: ";
		cin >> x1;
		cout << "Nhap y1: ";
		cin >> y1;
		initwindow(1200, 600);		
   		cleardevice();
		setcolor(2);
		line(x,y,x,y1);
		line(x,y1,x1,y1);
		line(x,y,x1,y1);
		while(!kbhit()) delay(1);
	}
};
class HinhChuNhat{
	int x,y,x1,y1;
	public:
	void Ve(){
		cout << "Nhap toa do thu nhat !";
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap y: ";
		cin >> y;
		cout << "Nhap toa do thu 2!";
		cout << "Nhap x1: ";
		cin >> x1;
		cout << "Nhap y1: ";
		cin >> y1;// (50,100) (300,500)
		initwindow(1000, 1000);		
   		cleardevice();
		setcolor(2);
		line(x,y,x1,y);
		line(x,y,x,y1);
		line(x1,y,x1,y1);
		line(x,y1,x1,y1);
		while(!kbhit()) delay(1);
	}
};
class HinhVuong{
	int x,y,x1,y1;
	public:
	void Ve(){
		cout << "Nhap x: ";
		cin >> x;
		y=x;
		cout << "Nhap x1: ";
		cin >> x1;
		y1=x1;//(50,50) (500,500)
		initwindow(1000,1000);		
   		cleardevice();
		setcolor(2);
		line(x1,y,x1,y1);
		line(x,y1,x1,y1);
		line(x,y,x,y1);
		line(x,y,x1,y);
		while(!kbhit()) delay(1);
	}
};
class DuongTron{
	int x,y,R;
	public:
	void Ve(){
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap y: ";
		cin >> y;
		cout << "Nhap ban kinh R: ";
		cin >> R;
		initwindow(1000,1000);		
   		cleardevice();
		setcolor(2);
		circle(x,y,R);
		while(!kbhit()) delay(1);
		}
};
int main(int argc, char *argv[]){
	DuongThang DT;
	TamGiac TG;
	HinhChuNhat HCN;
	HinhVuong HV;
	DuongTron DTR;
 cout << "\t-------MENU-------";
 cout << "\n\t1. Ve duong thang.";
 cout << "\n\t2. Ve tam giac.";
 cout << "\n\t3. Ve hinh chu nhat.";
 cout << "\n\t4. Ve hinh hinh vuong.";
 cout << "\n\t5. Ve duong tron.";
 cout << "\n\t0. Thoat khoi truong trinh! ";
 cout << "\n\t-------END--------";
 int luachon;
 while (true)
 {
  cout << "\n\nNhap lua chon cua ban: ";
  cin >> luachon;
  if (luachon == 1){
	DT.Ve();
  }
  else if (luachon == 2){
	TG.Ve();
  }
  else if (luachon == 3){
	HCN.Ve();
  }
  else if (luachon == 4){
	HV.Ve();
  }
  else if (luachon == 5){
	DTR.Ve();
  }
  else if (luachon == 0)
	break;
  else
   cout << "\nChon loi! Xin kiem tra lai: ";
 }
}
