#include <iostream.h>
#include <conio.h>
#include <math.h>

int panjang,lebar;  //deklarasi variabel global
void input();  //deklarasi prototipe fungsi
 void luas()
{
int ls;  //deklarasi variebel lokal
ls = panjang * lebar;
cout<<"Luasnya adalah : "<<ls;
}
void Keliling()
{
int kl;   //deklarasi variabel lokal
kl = (2*panjang) + (2*lebar);
cout<<"kelilingnya adalah : "<<kl;
}
void Diagonal()
{
float dg;  // deklarasi variebel lokal
dg = sqrt((panjang*panjang)+(lebar*lebar));
cout<<"Diagonalnya adalah : "<<dg;
}
void main()
{
int pilih;
do
{
	clrscr();
   cout<<"Pilihlah ------> "<<endl;
   cout<<"1. Luas Persegi Panjang  /n";
   cout<<"2. Keliling Persegi Panjang  /n";
   cout<<"3. Diagonal Persegi Panjang /n";
   cout<<"4. SELESAI /n";
   cout<<"Masukan pilihan anada  : ";
   cin>>pilih;
   if (pilih != 4)
   input(); //pemangilan fungsi input
   switch (pilih)
   {
   case 1 : luas();       //pemanggilan fungsi luas
            break;
   case 2 : Keliling();   //pemanggilan fungsi keliling
            break;
   case 3 : Diagonal();   //pemanggilan fungsi diagonal
            break;
   case 4 : cout<<"Terima kasih ..!";
   }
   getch();
   }while (pilih !=4);
 }
void input()
{
	cout<<"Masukan nilai panjang : ";
   cin>>panjang;
   cout<<"masukan nilai lebar : ";
   cin>>lebar;
   return;
 }



