#include <iostream>
using namespace std;

int main()
{
	int contador,a;
	cout<<"Cuantos?";
	cin>>a;
	struct dato{
		char nombre[50];
	}datos[a];
	for(contador=0;contador<a; contador++)
	{
		fflush(stdin);
		cout << "Escribe tu nombre : ";
		string nombre;
		cin.getline(datos[contador].nombre,50,'\n');
	}
	int noRepetir=1;	
	for(contador=0;contador<a;contador++){
		if(contador==a)
		{
			noRepetir++;
			cout<<noRepetir;
		}
	}
	if (contador == a || noRepetir==1 ){
		while(contador == a|| noRepetir==1){
			int ingreso;
			bool repetir=true;
			do{
				cout<< endl <<"1. Lista de empleados\n";
				cout<< endl <<"2. Eliminar empleados\n";
				cout<< endl <<"3. Salir\n";
				cout << endl << endl << "Escoja una Opcion: ";
				cin>>ingreso;
				switch(ingreso){
					case 1:
						for(contador=0;contador<a; contador++){
							cout<<"Nombre: "<<datos[contador].nombre<<"   Persona no: "<<contador+1,contador;
							cout<<"\n";
						}
					break;
					case 2:
						cout<<"\n\nHola programa no terminado\n";
					break;
					case 3:
						system("cls");
						cout<<"\n\nSalida del programa\n";
						cout<<"\nAdiosito\n"<<endl;
						repetir = false;
		            break;	
					default:
						system("cls");
						cout<<"Fin del programa";		
						repetir = false;
		            break;
				}
			}while(repetir!=false);
		}
	}
}
