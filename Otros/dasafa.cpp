#include<iostream>
#include<conio.h>
#include <stdlib.h>

using namespace std;

int cuantos(){
	int cuanto;
	cout<<"\n\n Ingrese una opcion: ";
	cin >> cuanto;
	return cuanto;
}
struct estudiante{
	char dpi[50];
	char nombre[50];
	char apellido[50];
	char edad[50];
	char profesion[50];
	char lugarDeNacimiento[50];
	char direccion[50];
	char telefono[50];
}estudiantes[5];


void mostrar(){
	system("cls");
		
		cout<<"\n\n Menu de Opciones"<<endl;
		cout<<"\n 1.Ingresar datos de los alumnos"<<endl;
		cout<<"\n 2.Ver datos almacenados de los alumnos"<<endl;
		cout<<"\n 0.Salir"<<endl;
}
int leer(){
	int opcion;
	cout<<"\n\n Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

void menu(){
	int opcion;
	bool repetir=true;
	do{
		mostrar();
		opcion=leer();
		switch(opcion){
			case 1:
				for(int a=1;a<=5;a++){
					system("cls");
					fflush(stdin);
					cout<<"\n Estudiante No."<<a<<endl;
					cout<<"\n\n Ingrese su Dpi: ";
					cin.getline(estudiantes[a].dpi,50,'\n');
					cout<<"\n Ingrese su Nombre: ";
					cin.getline(estudiantes[a].nombre,50,'\n');
					cout<<"\n Ingrese su Apellido: ";
					cin.getline(estudiantes[a].apellido,50,'\n');
					cout<<"\n Ingrese su Edad: ";
					cin.getline(estudiantes[a].edad,50,'\n');
					cout<<"\n Ingrese su Profesion: ";
					cin.getline(estudiantes[a].profesion,50,'\n');
					cout<<"\n Ingrese su Lugar de nacimiento: ";
					cin.getline(estudiantes[a].lugarDeNacimiento,50,'\n');
					cout<<"\n Ingrese su Direccion: ";
					cin.getline(estudiantes[a].direccion,50,'\n');
					cout<<"\n Ingrese su Telefono: ";
					cin.get(estudiantes[a].telefono,50,'\n');
				}
				break;
			case 2:
				system("cls");
				for(int a=1;a<=5;a++){
					cout<<"\n\n Estudiante No."<<a<<endl;
					cout<<"\n Dpi: "<<estudiantes[a].dpi<<endl;
					cout<<"\n Nombre: "<<estudiantes[a].nombre<<endl;
					cout<<"\n Apellido: "<<estudiantes[a].apellido<<endl;
					cout<<"\n Edad: "<<estudiantes[a].edad<<endl;
					cout<<"\n Profesion: "<<estudiantes[a].profesion<<endl;
					cout<<"\n Lugar de nacimiento: "<<estudiantes[a].lugarDeNacimiento<<endl;
					cout<<"\n Direccion: "<<estudiantes[a].direccion<<endl;
					cout<<"\n Telefono: "<<estudiantes[a].telefono<<endl;
					cout<<"\n";		
				}
				system("PAUSE");
				break;
			case 0:
				system("cls");
				cout<<"Fin del programa";		
				repetir = false;
            	break;           	
		}
	}while(repetir!=false);
}
int main (){
	menu();
	return 0;
}
