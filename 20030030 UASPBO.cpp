#include <iostream>
#include <conio.h>
using namespace std;

class bangun
{
 protected:
       int panjang,lebar,jari;
       double phi=3.24;
  public:
       virtual void get_data()=0;
       virtual void display_area()=0;
};


class LuasTabung : public bangun
{
   public:
    void get_data(void)
    {
       cout<<"\n\nHitung Luas selimut tabung\n\n";
       cout<<"Masukan Panjang   = "; cin>>panjang;
       cout<<"Masukan Lebar     = "; cin>>lebar;
    }
    void display_area(void)
    {
       double luas;
       luas = panjang * lebar;
       cout<<"\nDiket : panjang = "<<panjang;
       cout<<"\n       lebar  = "<<lebar;
       cout<<"\n\nDit : luas selimut tabung";
       cout<<"\n\nPenyelesaian\n";
       cout<<"luas selimut = panjang x lebar\n";
       cout<<"             = "<<panjang<<" x "<<lebar;
       cout<<"\n             = "<<luas;
    }
};

class VolumeTabung : public bangun
{
   public:
    void get_data(void)
    {
       cout<<"\n\nHitung Volume Tabung\n\n";
       cout<<"Masukan Panjang   = "; cin>>panjang;
       cout<<"Masukan Lebar     = "; cin>>lebar;
       cout<<"Masukan Jari-Jari = "; cin>>jari;
    }
    void display_area(void)
    {
    	double volume;
		volume = phi * jari * jari * lebar;
        cout<<"\nDiket : panjang   = "<<panjang;
        cout<<"\n      lebar     = "<<lebar;
        cout<<"\n      jari-jari = "<<jari;
        cout<<"\n\nDit : volume tabung";
        cout<<"\n\nPenyelesaian\n";
        cout<<"volume tabung = phi x jari x jari x lebar\n";
        cout<<"    	      = "<<phi<<" x "<<jari<<" x "<<jari<<" x "<<lebar;
        cout<<"\n	      = "<<volume;
	}

};


int main()
{
system("cls");
LuasTabung luas;
VolumeTabung volume;

bangun *list[2];
list[0]=&luas;
list[1]=&volume;

int pilih;
while(1)
{
system("cls");
  cout<<"\nBangun Datar Tabung\n";
  cout<<"1) Luas Selimut Tabung\n";
  cout<<"2) Volume Tabung\n";
  cout<<"Masukkan Pilihan:-";
  cin>>pilih;
  
  if(pilih==1){
          list[0]->get_data();
          list[0]->display_area();
          getch();
          }
  else if (pilih==2){
          list[1]->get_data();
          list[1]->display_area();
          getch();
          }
 else
     exit(1);
}
}
