#include<iostream>
#include<conio.h>
#include <stdlib.h>

using namespace std;

	int a,contador;
	int pos=1;
	int neg=0;
	int main(){
		cout << "Cuantos" << endl;
		cin>>a;
		/*if(a==1){*/
			for(int i=0;i<a;i++){
				cout<<"Ingreselo: ";
				cin>>contador;
				if(contador==1)
				{
					pos++;
					cout<<pos;
				}
				else
				{
					if(contador!=-1){
						neg==neg++;
					}
				}
			}
		/*}*/
	}
	
	
	//Programa que verifique si hay una entrada y si la hay entonces sume un
