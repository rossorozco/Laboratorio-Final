/*#include <stdio.h>
 
int main()
{
  int contador;
    for(contador=0;contador<5;contador++){  //este for se ejecutará 5 veces, de 0 hasta 4 (porque puse < y no <=) 
      printf("%da pasada del for, valor del contador: %d\n",contador + 1,contador);
    } 
  return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
	int contador,a;
	cout<<"Cuantos?";
	cin>>a;
	for(contador=0;contador<a; contador++)
	{
		fflush(stdin);
		cout << "Escribe tu nombre : ";
		string nombre;
		getline(cin, nombre);
		cout<<"Nombre: "<<nombre<<"\nPersona no: "<<contador+1,contador;
		cout<<"\n";
	}
	
}
