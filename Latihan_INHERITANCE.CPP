#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>

class pemesanan
{
public :
char nm[30],no[6];

public :
void data_pemesanan()
{
cout<<" Pemesanan Ticket" <<endl;
cout<<" Entry Transaksi Pemesanan Ticket" <<endl;
cout<<"=========================================="<<endl;
cout<<"Nomor Transaksi                   :";cin>>no;
cout<<"Nama Customer                     :";cin>>nm;
}
};

class tujuan
{
public:
char kd_tuj[5],nm_tuj[15];
public:
void data_tujuan()
{
cout<<"Kode Tujuan (KT001/KT002/KT003)  :";cin>>kd_tuj;
if(strcmp(kd_tuj,"KT001")==0 || strcmp(kd_tuj,"kt001")==0)
{
strcpy(nm_tuj,"JAKARTA");
}
else if(strcmp(kd_tuj,"KT002")==0 || strcmp(kd_tuj,"kt002")==0)
{
strcpy(nm_tuj,"MEDAN");
}
else if(strcmp(kd_tuj,"KT003")==0 || strcmp(kd_tuj,"kt003")==0)
{
strcpy(nm_tuj,"PEKANBARU");
}
cout<<"Nama Kota Tujuan                 :"<<nm_tuj<<endl;
}
};

class pesawat
{
public:
char kd_pswt[5],nm_pswt[15];
long int trf;
public:
void data_pesawat()
{
cout<<"Kode Pesawat (KP001/KP002/KP003) :";cin>>kd_pswt;
if(strcmp(kd_pswt,"KP001")==0 || strcmp(kd_pswt,"kp001")==0)
{
strcpy(nm_pswt,"GARUDA");
}
else if(strcmp(kd_pswt,"KP002")==0 || strcmp(kd_pswt,"kp002")==0)
{
strcpy(nm_pswt,"LION");
}
else if (strcmp(kd_pswt,"KM003")==0 || strcmp(kd_pswt,"km003")==0)
{
strcpy(nm_pswt,"SRIWIJAYA");
}
cout<<"Nama Pesawat                     :"<<nm_pswt<<endl;
}
};

class tarif:public pemesanan,tujuan,pesawat
{
public:
int jm_psn;
long int trf,biaya;

public:
void data_tarif()
{
pemesanan::data_pemesanan();
tujuan::data_tujuan();
pesawat::data_pesawat();
{
if((strcmp(kd_pswt,"KP001")==0)&&(strcmp(kd_tuj,"KT001")==0))
{
trf=1500000;
}
else if((strcmp(kd_pswt,"KP001")==0)&&(strcmp(kd_tuj,"KT002")==0))
{
trf=1300000;
}
else if((strcmp(kd_pswt,"KP001")==0)&&(strcmp(kd_tuj,"KT003")==0))
{
trf=1000000;
}
else if((strcmp(kd_pswt,"KP002")==0)&&(strcmp(kd_tuj,"KT001")==0))
{
trf=850000;
}
else if((strcmp(kd_pswt,"KP002")==0)&&(strcmp(kd_tuj,"KT002")==0))
{
trf=750000;
}
else if((strcmp(kd_pswt,"KP002")==0)&&(strcmp(kd_tuj,"KT003")==0))
{
trf=650000;
}
else if((strcmp(kd_pswt,"KP003")==0)&&(strcmp(kd_tuj,"KT001")==0))
{
trf=800000;
}
else if((strcmp(kd_pswt,"KP003")==0)&&(strcmp(kd_tuj,"KT002")==0))
{
trf=700000;
}
else if((strcmp(kd_pswt,"KP003")==0)&&(strcmp(kd_tuj,"KT003")==0))
{
trf=600000;
}
cout<<"Tarif                            :"<<trf<<endl;
cout<<"Jumlah Pesan                     :";cin>>jm_psn;
biaya=trf*jm_psn;
cout<<"Total Bayar                      :"<<biaya<<endl;
}
}
};

main()
{
tarif r;
r.data_tarif();
getch();
}
