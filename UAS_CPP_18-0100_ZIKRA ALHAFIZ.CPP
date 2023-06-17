#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>

class pemesanan
{
public :
char kdp[12],nm[30];

public :
void data_pemesanan()
{
cout<<"Penayangan Iklan:"<<endl;
cout<<"ENTRY ORDER PENAYANGAN IKLAN"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"Kode Pesan                   :";cin>>kdp;
cout<<"Nama Customer                :";cin>>nm;
}
};

class paket
{
public:
char kd_pkt[5];
double jam;
long int trf;
public :
void data_paket()
{
cout<<"Kode paket                   :";cin>>kd_pkt;
if((strcmp(kd_pkt,"KP001")==0 || strcmp(kd_pkt,"kp001"))==0)
{
 (jam,00.00);
     trf=850000;
}
else if((strcmp(kd_pkt,"KP002")==0 || strcmp(kd_pkt,"kp002"))==0)
{
 (jam=06.00);
     trf=1500000;
}
else if((strcmp(kd_pkt,"KP003")==0 || strcmp(kd_pkt,"kp003"))==0)
{
 (jam=12.00);
     trf=2500000;
}
else if((strcmp(kd_pkt,"KP004")==0 || strcmp(kd_pkt,"kp004"))==0)
{
 (jam=18.00);
     trf=3500000;
}
cout<<"Jam                          :";cin>>jam;
cout<<"Tarif                        :";cin>>trf;
}
};

class tarif
{
public:
int lama,trf;
long int biaya;
public:
void data_tarif()
{
cout<<"Lama Tayang(Hari)            :";cin>>lama;
biaya=trf*lama;
cout<<"Biaya                        :";cin>>biaya;
}
};

class diskon:public pemesanan,paket,tarif
{
public:
float diskon;
long int biaya,tot_byr;

public:
void data_diskon()
{
pemesanan::data_pemesanan();
paket::data_paket();
tarif::data_tarif();
{
if((strcmp(kd_pkt,"KP001")==0 || strcmp(kd_pkt,"kp001"))==0)&&(lama,>=30))
{
 diskon=0.05*biaya;
}
else if((strcmp(kd_pkt,"KP001")==0 || strcmp(kd_pkt,"kp001"))==0)&&(lama,>=90))
{
 diskon=0.10*biaya;
}
else if((strcmp(kd_pkt,"KP002")==0 || strcmp(kd_pkt,"kp001"))==0)&&(lama,>=30))
{
 diskon=0.05*biaya;
}
else if((strcmp(kd_pkt,"KP002")==0 || strcmp(kd_pkt,"kp001"))==0)&&(lama,>=90))
{
 diskon=0.10*biaya;
}
else if((strcmp(kd_pkt,"KP003")==0 || strcmp(kd_pkt,"kp001"))==0)&&(lama,>=30))
{
 diskon=0.05*biaya;
}
else if((strcmp(kd_pkt,"KP003")==0 || strcmp(kd_pkt,"kp001"))==0)&&(lama,>=90))
{
 diskon=0.10*biaya;
}
else if((strcmp(kd_pkt,"KP004")==0 || strcmp(kd_pkt,"kp001"))==0)&&(lama,>=30))
{
 diskon=0.05*biaya;
}
else if((strcmp(kd_pkt,"KP004")==0 || strcmp(kd_pkt,"kp001"))==0)&&(lama,>=90))
{
 diskon=0.10*biaya;
}
cout<<"Diskon                          :"<<diskon<<endl;
tot_byr=biaya-diskon;
cout<<"Total Bayar                     :"<<tot_byr<<endl;
}
}
};
main()
{
tarif r;
r.data_tarif();
getch();
}


