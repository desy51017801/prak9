#include <iostream.h>

int bil,pangkat;   //variabel global bernama bil dan pangkat
int perpangkatan(); //prototipe fungsi perpangkatan

int main()
{ cout<<"Masukan bilangan yang akan dipangkatkan : ";
cin>>bil;
cout<<"Masukan pangkat dari bilangan  tersebut : ";
cin>>pangkat;
cout<<"Hasil adalah : "<<perpangkatan();
return 0;
}
int perpangkatan()
{ int i, hasil=1; //variabel lokal untuk fungsi perpangkatan
if (pangkat < 0)
hasil=0;  //diamsumsikan bila pangkat < 0 adalah 0
else  //pangkat > 0
  { for (i=0; i<pangkat;  i++)   //jika pangkat=0,maka for
hasil*=bil;                    //tidak dilakukan
                              //ulangi sampai nilai i=pangkat
  }
return(hasil);
}






