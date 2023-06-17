#include<conio>
#include<iostream>
#define pangkat2(n) n*n
#define pangkat3(n) n*n*n

void judul()
{
cout<<"Membuat Fungsi Pemangkatan 2 dan Pemangkatan 3 "<<endl;
}
garis()
{
cout<<"----------------------------------------------"<<endl;
}
main()
{
int n;

judul();
garis();
cout<<"Masukkan Angka : ";cin>>n; /*Input Untuk Angka Yang Akan Dipangkatkan*/
 garis();
cout<<"Pangkat Dua dari "<<n<<" adalah "<<pangkat2(n)<<endl;
cout<<"Pangkat Tiga dari "<<n<<" adalah "<<pangkat3(n)<<endl;
getche();
}
                    
