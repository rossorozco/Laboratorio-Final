
#include <iostream>
#include <conio.h>
using namespace std;

struct atleta{
 char nombre[30];
 char pais[15];
 int numero_medallas;
}at[10];

int main(){
 int mayor=0,n_atletas,posM;
 cout<<"Digite el numero de atletas: ";cin>>n_atletas;
 cout<<"\n";
 
 for(int i=0;i<n_atletas;i++){
  fflush(stdin);
  cout<<i+1<<". Nombre: ";cin.getline(at[i].nombre,30,'\n');
  cout<<i+1<<". Pais: ";cin.getline(at[i].pais,15,'\n');
  cout<<i+1<<". Numero de medallas: ";cin>>at[i].numero_medallas;
  cout<<"\n";
  fflush(stdin);
  
  if(at[i].numero_medallas>mayor){
   mayor=at[i].numero_medallas;
   posM=i;
  }
 }
 
 cout<<"\nLos datos del atleta con mayor medallas son: \n";
 cout<<"Nombre: "<<at[posM].nombre<<endl;
 cout<<"Pais: "<<at[posM].pais<<endl;
 getch();
 return 0;
}
