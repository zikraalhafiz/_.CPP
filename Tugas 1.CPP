#include <iostream.h>
#include <conio.h>
#include <stdio.h>
main()
{
 int b,c,d,e,f,n,o,p,q,m;
 int A=3,B=6,C=2,K=5,L=4,M=3;

 clrscr();

 /*proses*/
 c=4+2>A;
 d=B-2>3+2;
 e=B+2<=6+2;
 f=c&&d||e;

 cout<<endl<<endl;
 cout<<"Program Ekspresi AND / OR"<<endl<<endl;
 cout<<"Hasil dari c = 4+2>A = "<<c<<endl;
 cout<<"Hasil dari d = B-2>3+2 = "<<d<<endl;
 cout<<"Hasil dari e = B-2>3+2 = "<<e<<endl;
 cout<<endl<<endl;
 cout<<"Hasil dari D = 4+2>A&&B-2>3+2||B-2>3+2 = "<<f;

//proses

 n=K+5<M;
 o=C*M<L;
 p=2*M-L>0;
 q=n||o&&p;

 cout<<endl<<endl;
 cout<<"Program Ekspresi AND / OR"<<endl<<endl;
 cout<<"Hasil dari n = K+5<M = "<<n<<endl;
 cout<<"Hasil dari o = C*M<L = "<<o<<endl;
 cout<<"Hasil dari p = 2*M-L>0 = "<<p<<endl;
 cout<<endl<<endl;
 cout<<"hasil dari q = K+5<M||C*M<L&&2*M-L>0 = "<<q;

//Proses
      n=L+5<M;
      o=C*K<L;
      p=2*K-L>0;
      q=n||o&&p;

      cout<<endl<<endl;
      cout<<"Program Ekspresi AND / OR"<<endl<<endl;
      cout<<"Hasil dari n = L + 5 < M adalah "<<n<<endl;
      cout<<"Hasil dari o = c * K < L adalah "<<o<<endl;
      cout<<"Hasil dari p = 2 * K - L > 0 adalah "<<p;
      cout<<endl<<endl;
      cout<<"Hasil dari q = L + 5 < M ||c * K < L && 2 * K - L > 0 adalah "<<q;

//Proses

   b=A*4<=3*M+B;
   n=b;

  cout<<endl<<endl;
  cout<<"Program Ekspresi AND"<<endl<<endl;
  cout<<"Hasil dari b = A * 4 <= 3 * M + B adalah "<<b;
  cout<<endl<<endl;
  cout<<"Hasil dari n=  A * 4 <= 3 * M + B adalah "<<n;


   b=K+10>A;
   d=L-2>4*C;
   m=b&&d;

  cout<<endl<<endl;
  cout<<"Program Ekspresi AND"<<endl<<endl;
  cout<<"Hasil dari b = K + 10 > A adalah "<<b<<endl;
  cout<<"Hasil dari d = L - 2 > 4 * C adalah "<<d;
  cout<<endl<<endl;
  cout<<"Hasil dari m = K + 10 > A && L - 2 > 4 * C adalah "<<m;
  cout<<endl;
 getch();
}
