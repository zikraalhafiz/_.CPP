#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
#include <stdio.h>
head()
{
cout<<"                  PENYEWAAN PAKAIAN ADAT NASIONAL\n";
cout<<"                          CHONIO BOUTIQUE \n";
cout<<"                 *********************************\n";
}
bintang()
{
cout<<"*********************************************************************\n";
}
main()
{
int pil,j,i,tb,ls,ub,uk,tot;
char np[30],lop;

struct
{
char *npak,kode[5],ukuran;
int harga,js,sub;
}kolom[5];

head();
cout<<"       Selamat Datang Di Chonio Boutique \n\n";
cout<<"       Pilihan Menu : \n";
cout<<"       1. Input Data\n";
cout<<"       2. Log Out \n";
cout<<"       ===========================================\n";
cout<<"       Inputkan Pilihan Anda : ";cin>>pil;
if (pil==1)
{ goto mulai; }
else
{ return 0;  }

mulai:
clrscr();
head();
cout<<"Nama Penyewa      : ";gets(np);
cout<<"Input Lama Sewa   : ";cin>>ls;
cout<<"Input Jumlah Data : ";cin>>j;
cout<<endl<<endl;
cout<<"******************************************\n";
for (i=1;i<=j;i++)
{
cout<<"Data ke-"<<i<<endl;
cout<<"Input Kode Paket Baju [JB/JT/SB] : ";cin>>kolom[i].kode;
cout<<"Input Kode Ukuran Baju [S/M/L]   : ";cin>>kolom[i].ukuran;
cout<<"Jumlah Sewa : ";cin>>kolom[i].js;
}
clrscr();
head();
cout<<"Nama Penyewa  : "<<np<<endl<<endl;
cout<<"Data Baju Yang Disewa\n";
bintang();
cout<<"No.  Nama Paket      Harga        Jumlah Sewa     Subtotal  \n";
bintang();
for (i=1;i<=j;i++)
{
cout<<setiosflags(ios::left)<<setw(5)<<i;
if ((!strcmp (kolom[i].kode,"JB"))||(!strcmp (kolom[i].kode,"jb")))
{
  kolom[i].npak="Jawa Barat";
  if (kolom[i].ukuran=='s'||kolom[i].ukuran=='S')
  kolom[i].harga=200000;
  else if (kolom[i].ukuran=='M'||kolom[i].ukuran=='m')
  kolom[i].harga=250000;
  else if (kolom[i].ukuran=='L'||kolom[i].ukuran=='l')
  kolom[i].harga=275000;
}
else if ((!strcmp (kolom[i].kode,"JT"))||(!strcmp (kolom[i].kode,"jt")))
{
  kolom[i].npak="Jawa Tengah";
  if (kolom[i].ukuran=='s'||kolom[i].ukuran=='S')
  kolom[i].harga=205000;
  else if (kolom[i].ukuran=='M'||kolom[i].ukuran=='m')
  kolom[i].harga=255000;
  else if (kolom[i].ukuran=='L'||kolom[i].ukuran=='l')
  kolom[i].harga=280000;
}
else if ((!strcmp(kolom[i].kode,"SB"))||(!strcmp(kolom[i].kode,"sb")))
{
  kolom[i].npak="Sumatera Barat";
  if (kolom[i].ukuran=='s'||kolom[i].ukuran=='S')
  kolom[i].harga=230000;
  else if (kolom[i].ukuran=='M'||kolom[i].ukuran=='m')
  kolom[i].harga=260000;
  else if (kolom[i].ukuran=='L'||kolom[i].ukuran=='l')
  kolom[i].harga=300000;
}
else
{
  kolom[i].npak="Salah KODE !!";
  if (kolom[i].ukuran=='s'||kolom[i].ukuran=='S')
  kolom[i].harga=0;
  else if (kolom[i].ukuran=='M'||kolom[i].ukuran=='m')
  kolom[i].harga=0;
  else if (kolom[i].ukuran=='L'||kolom[i].ukuran=='l')
  kolom[i].harga=0;
}
cout<<setiosflags(ios::left)<<setw(16)<<kolom[i].npak;
cout<<setiosflags(ios::left)<<setw(13)<<kolom[i].harga;
cout<<setiosflags(ios::left)<<setw(16)<<kolom[i].js;
kolom[i].sub=kolom[i].harga*kolom[i].js;
cout<<setiosflags(ios::left)<<setw(16)<<kolom[i].sub<<endl;
tot=tot+kolom[i].sub;
}
bintang();
tb=tot*ls;
cout<<"                                    Jumlah Biaya : "<<tot<<endl;
cout<<"          Total Biaya (Jumlah Biaya x Lama Sewa) : "<<tb<<endl;
cout<<"                                      Uang Bayar : ";cin>>ub;
uk=ub-tb;
cout<<"                                    Uang Kembali : "<<uk<<endl;
cout<<"\n             ****TERIMA KASIH**** \n";


cout<<"Input Data Lagi [Y/T] : ";cin>>lop;
if (lop=='y'||lop=='Y')
{ goto mulai; }
else
{ return 0;  }

getch();
}