#include  <iostream.h>
#include <conio.h>

 void tukarAB (int &a,int &b)
{int temp;
temp = a;
a = b;
b = temp;
cout<<"dalam fungsi tukarAB/n";
cout<<"nilai a = "<<a<<" dan nilai b = "<<b<<endl;
//fungsi bertipe void tidak  mengemblikan nilai
}
int main ()
{
	int a,b;
	cout<<"masukan nilai a : ";cin>>a;
	cout<<"masukan nilai b : ";cin>>b;
	cout<<"/n nlai a dan b sebelum masuk fungsi tukarAB:/n";
   cout<<"nilai a = "<<a<<" dan b "<<b<<endl<<endl;


   //a dan b dikirim ke fungsi tukarAB
   tukarAB(a,b);
   cout<<"/nnnilai a dan b sesudah keluar fungsi tukarAB: /n";
   cout<<"nilai a = "<<a<<" dan b "<<b<<endl;
   getch();
   return(0);
}