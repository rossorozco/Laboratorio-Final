#include <iostream>
#include <fstream>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <wchar.h>
#include <cstdlib>

using namespace std;

struct nodo{
	int dpi;
	nodo* siguiente;
} *primero, *ultimo;

struct nodoDos{
	int codigoDos;
	nodoDos* siguienteDos;
}*primeroDos,*ultimoDos;

struct nodoTres{
	string nombreApellido;
	nodoTres* siguienteTres;
}*primeroTres,*ultimoTres;         

void dpi(){
	nodo* nuevo = new nodo();
	cout << " Ingrese el dpi del nuevo empleado: ";
	cin >> nuevo->dpi;

	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		ultimo = nuevo;
	}
	cout << endl << " Dato ingresado " << endl << endl;
}

void codigoEmpleado(){
	nodoDos* nuevoDos = new nodoDos();
	cout << " Ingrese el codigo del nuevo empleado: ";
	cin >> nuevoDos->codigoDos;

	if(primeroDos==NULL){
		primeroDos = nuevoDos;
		primeroDos->siguienteDos = NULL;
		ultimoDos = primeroDos;
	}else{
		ultimoDos->siguienteDos = nuevoDos;
		nuevoDos->siguienteDos = NULL;
		ultimoDos = nuevoDos;
	}
	cout << endl << " Dato ingresado " << endl << endl;
}

void nombreApellido(){
	nodoTres* nuevoTres = new nodoTres();
	cin.ignore();
	cout << " Ingrese el Nombre y Apellido del nuevo empleado: ";
	cin.ignore();
    getline(cin, nuevoTres->nombreApellido);

	if(primeroTres==NULL){
		primeroTres = nuevoTres;
		primeroTres->siguienteTres = NULL;
		ultimoTres = primeroTres;
	}else{
		ultimoTres->siguienteTres = nuevoTres;
		nuevoTres->siguienteTres = NULL;
		ultimoTres = nuevoTres;
	}
	cout << endl << " Dato ingresado " << endl << endl;
}

void ingresoDatos(){
	dpi();
	codigoEmpleado();
	nombreApellido();
}

// primero = 45    ultimo = 12      actual = 12       encontrado = false           nodoBuscado = 7               45, 6, 7 , 12
 
// COLA            45 -> 6 -> 7 -> 12 -> NULL  

void buscarDpi(){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dpi del empleado a Buscar: ";
	cin >> nodoBuscado;
	if(primero != NULL){
		while(actual!=NULL && encontrado != true){
			
			if(actual->dpi == nodoBuscado){
				cout << "\n Dpi: ( " << nodoBuscado << " ) Encontrado";
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}
		if(!encontrado){
			cout << "\n Dpi No Encontrado";
		}
	}else{
		cout << endl << "No hay datos esta vacio " << endl << endl;
	}	
}

void buscarCodigo(){
	nodoDos* actualDos = new nodoDos();
	actualDos = primeroDos;
	bool encontradoDos = false;
	int nodoDosBuscado = 0;
	cout << " Ingrese el dpi del empleado a Buscar: ";
	cin >> nodoDosBuscado;
	if(primeroDos != NULL){
		while(actualDos!=NULL && encontradoDos != true){
			
			if(actualDos->codigoDos == nodoDosBuscado){
				cout << "\n Codigo: ( " << nodoDosBuscado << " ) Encontrado";
				encontradoDos = true;
			}
			
			actualDos = actualDos->siguienteDos;
		}
		if(!encontradoDos){
			cout << "\n Codigo No Encontrado";
		}
	}else{
		cout << endl << "No hay datos esta vacio " << endl << endl;
	}	
}

void buscarNombreApellido(){
	nodoTres* actualTres = new nodoTres();
	actualTres = primeroTres;
	bool encontradoTres = false;
	int nodoTresBuscado = 0;
	cout << " Ingrese el nombre completo del empleado a Buscar: \n";
	cout << " Por favor colocar el nombre completo ";
	cin >> nodoTresBuscado;
	if(primeroTres != NULL){
		while(actualTres!=NULL && encontradoTres != true){
			
			if(actualTres->nombreApellido[50] == nodoTresBuscado){
				cout << "\n Empleado: ( " << nodoTresBuscado << " ) Encontrado";
				encontradoTres = true;
			}
			
			actualTres = actualTres->siguienteTres;
		}
		if(!encontradoTres){
			cout << "\n Codigo No Encontrado";
		}
	}else{
		cout << endl << "No hay datos esta vacio " << endl << endl;
	}	
}

void desplegarCola(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){
		while(actual!=NULL){
			cout << endl << "\n Dpi: " << actual->dpi<<endl;
			actual = actual->siguiente;
		}
	}else{
		cout << endl << " No hay datos esta vacio " << endl << endl;
	}
}

int buscar(){
	int opcion_busqueda=0;
	do
	{
		cout<< endl <<" BUSQUEDA DE EMPLEADOS\n";
		cout<< endl <<"Ingrese que tipo de busqueda desea realizar\n";
		cout<< endl <<"1. Desea buscar por DPI?\n";
		cout<< endl <<"2. Desea buscar por codigo empleado?\n";
		cout<< endl <<"3. Salir\n";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion_busqueda;
		system("cls");
		fflush(stdin);
		switch(opcion_busqueda){
			case 1:
				cout << endl << endl << " BUSQUEDA DPI " << endl << endl;
				buscarDpi();
				break;
			case 2:
				cout << endl << endl << " BUSQUEDA POR CODIGO DE EMPLEADO " << endl << endl;
				buscarCodigo();
				break;
			case 3:
				cout << endl << endl << " BUSQUEDA POR NOMBRE " << endl << endl;
				cout <<endl<<" Por favor colocar el nombre completo "<<endl;
				buscarNombreApellido();
				break;
			case 4:
				cout << endl << endl << " Programa finalizado..." << endl << endl;
				break;
			default:
				cout << endl << endl << " Opcion No Valida " << endl << endl;
			}
	} while (opcion_busqueda != 4);
	return 0;
}
int dowhile(){	
	
	int opcion_menu=0;
	do
	{
		cout<< endl <<" \n  Menu Principal \n";
		cout<< endl <<" 1. INGRESO DE DATOS \n";
		cout<< endl <<" 2. BUSCAR EMPLEADO \n";
		cout<< endl <<" 3. ELIMINAR REGISTRO DEL EMPLEADO \n";
		cout<< endl <<" 4. MOSTRAR LISTA DE EMPLEADOS \n";
		cout<< endl <<" 5. REPORTE DE EMPLEADOS CON SALARIO MAYOR A Q10,000 \n";
		cout<< endl <<" 6. SALIR \n";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion_menu;
		system("cls");
		fflush(stdin);
		switch(opcion_menu){
			case 1:
				cout << endl << endl << " INGRESO DE DATOS " << endl << endl;
				ingresoDatos();
				break;
			case 2:
				cout << endl << endl << " BUSCAR EMPLEADO " << endl << endl;
				buscar();
				break;
			case 3:
				cout << endl << endl << " ELIMINAR REGISTRO DEL EMPLEADO " << endl << endl;
				break;
			case 4: 
				cout << endl << endl << " LISTA DE EMPLEADOS " << endl << endl;
				desplegarCola();
				break;
			case 5: 
				cout << endl << endl << " REPORTE DE EMPLEADOS CON SALARIO MAYOR A Q10,000 " << endl << endl;
				break;
			case 6:
				cout << endl << endl << " Programa finalizado..." << endl << endl;
				break;
			default:
				cout << endl << endl << " Opcion No Valida " << endl << endl;
			}
	} while (opcion_menu != 6);
	return 0;
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
	dowhile();
	getch();
	archsal.close();
}
