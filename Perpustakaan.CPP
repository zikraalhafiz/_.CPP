#include<stdio.h>
#include<conio.h>
#include<iostream.h>


judul()
{
cout<<"——————————-\n”;
cout<<"Menghitung Total Bayar Penyewaan\n”;
cout<<"——————————-\n”;
}

//Fungsi Perhitungan dan penambahan nilai
int total(int x, int y)
{
int z;
return(z=x*y);
}

main()
{

char kobuk[3],jebuk[20],napen[50];
int tabuk,bapin,tase;

judul();
cout<<"Nama Penyewa Buku \t: “;cin>>napen;
cout<<"Kode Buku (C/K/N) \t: “;cin>>kobuk;
if (strcmp(kobuk,"C”)==32 || strcmp(kobuk,”C”)==0)
{
strcpy(jebuk,"Cerpen”);
tase=500;
}
else if(strcmp(kobuk,"K”)==32 || strcmp(kobuk,”K”)==0)
{
strcpy(jebuk,"Komik”);
tase=700;
}
else if(strcmp(kobuk,"N”)==32 || strcmp(kobuk,”N”)==0)
{
strcpy(jebuk,"Novel”);
tase=1000;
}
else
{
strcpy(jebuk,"Kode Buku Salah”);
tase=0;
}
cout<<"Banyak Pinjam \t: “;cin>>bapin;

cout<<"Tarif Sewa \t: “<<tase<<endl;
cout<<"Jenis \t\t: “<<jebuk<<endl;
cout<<"Penyewa dengan Nama \t: “<<napen<<endl;
cout<<"Jumlah Bayar Penyewaan \t: “<<total(bapin,tase);

getch();
}
