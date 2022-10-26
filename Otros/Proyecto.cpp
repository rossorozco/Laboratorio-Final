#include <iostream>
#include <fstream>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <wchar.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;

/*void menu();
int ingresarOpcion();
int cantidadEstudiantes();
int ingresoDatos();
int busquedaDpi();
void funcionDoWhile();
void busquedaCodigoEmpleado();
void busquedaNombreApellido();
void mostrarListaDeEmpleados();
void reporteDeEmpleados();
void buscarEmpleado();
void eliminarRegistro();
void funcionBusquedaEmpleados();
*/

void menu()
{
	system("cls");
	int opcion;
	cout<<" \nMenú Principal \n";
	cout<<" 1. INGRESO DE DATOS \n";
	cout<<" 2. MOSTRAR LISTA DE EMPLEADOS \n";
	cout<<" 3. REPORTE DE EMPLEADOS CON SALARIO MAYOR A Q10,000 \n";
	cout<<" 5. BUSCAR EMPLEADO \n";
	cout<<" 6. ELIMINAR REGISTRO DEL EMPLEADO \n";
	cout<<" 4. SALIR \n";
	cout<<"\n\nElija una opcion: ";
}
int ingresarOpcion(){
	int opcion;
	cout<<"\n\n Ingrese una opcion: ";
	cin >> opcion;
	return opcion;
}

int cantidadEmpleados(){
	int opcioncantidad;
	cout<<"Ingrese la cantidad de empleados a ingresar: \n";
	cin>>opcioncantidad;
	return opcioncantidad;
}

int dpi(){
	int b,cantidad;char dpi[13];
	cantidad=cantidadEmpleados();
	for(int b=0;b<cantidad;b++)
	{
	system("cls");
	fflush(stdin);
	cout<<"Ingrese DPI ["<<b<<"]:\n";
	cin>>dpi[b];
	}
	return dpi[b];
}
int nombreApellido(){
	int i,cantidad; char nombre[20];
	cantidad=cantidadEmpleados();
	for(int i=0;i<cantidad;i++)
	{
	system("cls");
	fflush(stdin);
	cout<<"Ingrese primer nombre ["<<i<<"]:\n";
	cin>>nombre[i];
	}
return nombre[i];
}
int apellido(){
	int e,cantidad;char apellido[20];
	cantidad=cantidadEmpleados();
	for(int e=0;e<cantidad;e++)
	{
		system("cls");
		fflush(stdin);
		cout<<"Ingrese apellido No. ["<<e<<"]:\n";
		cin>>apellido[e];
	}
return apellido[e];
}

int codigoEmpleado(){
	int d,cantidad,codigo_empleado[20];
	cantidad=cantidadEmpleados();
	for(int d=0;d<cantidad;d++){
	system("cls");
	fflush(stdin);
	cout<<"Codigo Empleado No. ["<<d<<"]: \n";
	cin>>codigo_empleado[d];
	}
return codigo_empleado[d];
}
	
int salario(){
	int c,cantidad;double salario[20];
	cantidad=cantidadEmpleados();
	for(int c=0;c<cantidad;c++){
	system("cls");
	fflush(stdin);
	cout<<"Salario No. ["<<c<<"]:\n";
	cin>>salario[c];
	}
	return salario[c];
}

int ingresoDatos(){
	int cantidad;
	cantidad=cantidadEmpleados();
	dpi();
	nombreApellido();
	codigoEmpleado();
	salario();
}

/*
void reporteDeEmpleados(){
	int opcion;
	char ingreso;
	do while(opcion =! 4){
		
	for(int i=0;i<1;i++){
*/
		
int busquedaDpi(){
	int cantidad,op_dpi,band,op_apellido,op_codigo;char num;
	op_dpi=dpi();op_apellido=nombreApellido();op_codigo=codigoEmpleado();
	cantidad=cantidadEmpleados();
	cout<<"Ingrese el dpi que desea buscar: ";
	cin>>num;
	band=0;
	for(int i=0;i<cantidad;i++)
	if(op_dpi==num)
	{cout<<"El dpi del empleado es: "<<op_dpi;
	cout<<". Y el nomble y apellido es: "<<op_apellido;
	cout<<".Y el codigo del empleado es: "<<op_codigo;
	band=1;
	}
	if(band==0)
	cout<<"Dpi no encontrado";
	getch();
	}
	
void busquedaCodigoEmpleado(){
	int cantidad,op_codigo,band,op_dpi,op_apellido;char num;
	op_dpi=dpi();op_apellido=nombreApellido();op_codigo=codigoEmpleado();
	cantidad=cantidadEmpleados();
	cout<<"Ingrese el codigo de empleado que desea buscar: ";
	cin>>num;
	band=0;
	for(int i=0;i<cantidad;i++)
	if(op_codigo==num)
	{cout<<"El dpi del empleado es: "<<op_dpi;
	cout<<". Y el nomble y apellido es: "<<op_apellido;
	cout<<".Y el codigo del empleado es: "<<op_codigo;
	band=1;
	}
	if(band==0)
	cout<<"Codigo no encontrado";
	getch();
	}
	
void busquedaNombre(){
	int cantidad,op_codigo,band,op_dpi,op_apellido;char num;
	op_dpi=dpi();op_apellido=nombreApellido();op_codigo=codigoEmpleado();
	cantidad=cantidadEmpleados();
	cout<<"Ingrese el nombre y apellido del empleado que desea buscar: ";
	cin>>num;
	band=0;
	for(int i=0;i<cantidad;i++)
	if(op_apellido==num)
	{cout<<"El dpi del empleado es: "<<op_dpi;
	cout<<". Y el nomble y apellido es: "<<op_apellido;
	cout<<".Y el codigo del empleado es: "<<op_codigo;
	band=1;
	}
	if(band==0)
	cout<<"Codigo no encontrado";
	getch();
	}
	
void busquedaApellido(){
	cout<<"Codigo no encontrado";
	getch();
}
	
void funcionBusquedaEmpleados(){
	int ingreso;
	bool repetir=true;
	do{
		cout<< endl <<" BUSQUEDA DE EMPLEADOS\n";
		cout<< endl <<"Ingrese que tipo de busqueda desea realizar\n";
		cout<< endl <<"1. Desea buscar por DPI?\n";
		cout<< endl <<"2. Desea buscar por codigo empleado?\n";
		cout<< endl <<"3. Desea buscar por nombre ?\n";
		cout<< endl <<"4. Desea buscar por apellido ?\n";
		cout<< endl <<"5. Salir\n";
		cout << endl << endl << " Escoja una Opcion: ";
		cin>>ingreso;
		switch(ingreso){
			case 1:
					busquedaDpi();			
			break;	
				
			case 2:
					busquedaCodigoEmpleado();
			break;
			
			case 3:
					busquedaNombre();
			case 4:
					busquedaApellido();
			case 5:
					cout<<"\n\nSalida del programa\n";
					cout<<"\nAdiosito\n"<<endl;
					repetir = false;
	            	break;	
			break;
			default:
					system("cls");
					cout<<"Fin del programa";		
					repetir = false;
	            	break;	
			}		
	}while(repetir!=false);
}

void funcionDoWhile(){
	int opcion;
	bool repetir=true;
	do{
		menu();
		opcion=ingresarOpcion();
		switch(opcion){
			case 1:
					ingresoDatos();			
			break;	
				
			case 2:
					//mostrarListaDeEmpleados();
			break;
			
			case 3:
					//reporteDeEmpleados();
			break;
			
			case 4:
					funcionBusquedaEmpleados();
			break;
			
			case 5:
					//eliminarRegistro();
			break;
			
			case 6:
					cout<<"\n\nSalida del programa\n";
					cout<<"\nAdiosito\n"<<endl;
					repetir = false;
					break;
			break;
			default:
					system("cls");
					cout<<"Fin del programa";		
					repetir = false;
	            	break;
			}		
	}while(repetir!=false);
}
int main()
{
	setlocale(LC_CTYPE, "Spanish");
	
	ofstream archsal("prueba.txt", ios::app );
	
	if(!archsal)
	{
		cerr<<"Error, no se puede abrir el archivo"<< endl;
		getch();
	
	}
	funcionDoWhile();
	getch();
	archsal.close();
}
