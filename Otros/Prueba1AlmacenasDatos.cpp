#include <iostream>
using namespace std;

int main() {
	/*int a;
	cout << "Cuantos vas a ingresar?" << endl;
	cin>>a;*/
	struct dato {
		char nombre[50],apellido[50],ocupacion[50], edad[3];
	}datos[5];
	for (int b=0;b<5;b++){
		system("cls");
		fflush(stdin);
		cout << "Ingrese nombre:" << endl;
		cin.getline(datos[b].nombre, 50,'\n');
		cout << "Ingrese apellido:" << endl;
		cin.getline(datos[b].apellido, 50,'\n');
		cout << "Ingrese ocupacion:" << endl;
		cin.getline(datos[b].ocupacion, 50,'\n');
		cout << "Ingrese edad:" << endl;
		cin.getline(datos[b].edad,'\n');
		cout << " " << endl;
	}
	
	for (int b=0;b<5;b++){
		cout << "Hola soy: " <<datos[b].nombre << " " << datos[b].apellido << ". Y mi ocupacion es: "<<datos[b].ocupacion<<endl;
		cout << "Mi edad es: " <<datos[b].edad<< endl;
	}
}

/*#include<iostream>
using namespace std;

int main() {
   cout << "Escribe tu nombre : ";
   string nombre;
   getline(cin, nombre);
   cout << "Hola " << nombre << endl;
   int num = nombre.size();
   cout << "Tu nombre tiene " << num << " caracteres" << endl;
}*/

/*#include<iostream>
using namespace std;

int main() {
    cout << "ESCRIBE TUS DATOS : " << endl;
    string nombre, apellido1, apellido2, email, direccion, poblacion;
    int edad; long long telefono;
    cout << "Nombre : "; getline(cin, nombre);
    cout << "Primer Apellido : "; getline(cin, apellido1);
    cout << "Segundo Apellido : "; getline(cin, apellido2);
    cout << "Direccion : " ; getline(cin, direccion);
    cout << "Poblacion : " ; getline(cin, poblacion);
    cout << "e-mail : "; cin >> email;
    cout << "Edad : "; cin >> edad;
    cout << "Telefono : " ; cin >> telefono;
    cout << endl <<  "TUS DATOS" << endl;
    cout << "Nombre : " << nombre <<endl;
    cout << "Apellidos : " << apellido1 << " " << apellido2 << endl;
    cout << "E-mail : " << email << endl;
    cout << "Edad : " << edad << endl;
    cout << "Telefono : " << telefono <<endl;
    cout << "Domicilio : " << direccion << " " << poblacion << endl;
}*/
