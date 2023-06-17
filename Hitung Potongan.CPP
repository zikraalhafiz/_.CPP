#include<conio.h>
#include<stdio.h>
#include<iostream.h>
potong(long int *pembelian_barang,long int *diskon)
{
if(*pembelian_barang>5000000)
*diskon=*pembelian_barang*35/100;
else
if(*pembelian_barang>=1000000 && *pembelian_barang<=5000000)
*diskon=*pembelian_barang*20/100;
else
*diskon=0;
}
main()
{
long int pmbelian,dskn,total;
cout<<"PROGAM HITUNG POTONGAN"<<endl;
cout<<endl;
cout<<"Besar Pembelian Barang Rp. ";cin>>pmbelian;
cout<<endl;
potong(&pmbelian,&dskn);
cout<<"Besar Diskon yang diberikan Rp. "<<dskn<<endl;
total=pmbelian-dskn;
cout<<"Besar Harga yang harus dibayarkan Rp. "<<total<<endl;
getch();
}
