#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
main()
{

char kata[50];
cout<<"Masukan Sembarang Kata = ";
gets(kata);
strrev(kata);
cout<<"Hasil Perubahan = "<<kata;
getch();
}