#include<conio>
#include<iostream>
#include<conio>
#define phi 3.14286
#define L(n) phi*n*n
#define K(n) phi*2*n

void judul()
{
cout<<"Program Menghitung Luas dan Keliling Lingkaran"<<endl;
}
garis()
{
cout<<"----------------------------------------------"<<endl;
}
main()
{
int n,luas,keliling;

clrscr();
judul();
garis();
cout<<"Masukkan Jari-Jari Lingkaran : ";cin>>n;  /*Input Jari-Jari Lingkaran*/
garis();
luas=L(n);
cout<<"Maka Luas Lingkaran dengan Jari-Jari "<<n<<" adalah "<<luas<<endl;
keliling=K(n);
cout<<"Maka Keliling Lingkaran dengan Jari-Jari "<<n<<" adalah "<<keliling<<endl;
garis();
getch();
}       
