#include<stdio.h>
#include<conio.h>
main()
{
 int umur;
 char nobp[13],nama[25],prodi[25],alm[30],jk;
 clrscr();

 /* Menginputkan Data*/
 printf("\n  Entry Data Identitas Mahasiswa\n");
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 printf("Nomor Bp        :");scanf("%s",&nobp);
 printf("Nama Mahasiswa  :");scanf("%s",&nama);
 printf("Alamat          :");scanf("%s",alm);
 printf("Program Study   :");scanf("%s",prodi);
 printf("Jenis Kelamin   :");jk=getch();printf("%c\n",jk);
 printf("Umur            :");scanf("%i",&umur);
 printf("\n");

 /*Menampilkan Data*/
 printf("Informasi Data Identitas Mahasiswa\n");
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 printf("Nomor Bp        :%s\n",nobp);
 printf("Nama Mahasiswa  :%s\n",nama);
 printf("Alamat          :%s\n",alm);
 printf("Program Sudty   :%s\n",prodi);
 printf("Jenis Kelamin   :%c\n",jk);
 printf("Umur            :%i\n",umur);

 getch();
}
