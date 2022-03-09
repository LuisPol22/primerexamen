#include "Promedio.cpp"
#include <iostream>
#include <string.h>


using namespace std;
main(){
	char continuar;
	string cod,nombres,apellidos,curso;
	int n1,n2,n3,n4;

	fflush(stdin);
	cout<<"INGRESAR CODIGO DE ESTUDIANTE: ";
	cin>>cod;
		cout<<"INGRESAR NOMBRE: ";
	cin>>nombres;
		cout<<"INGRESAR APELLIDO: ";
	cin>>apellidos;
		cout<<"INGRESAR CURSO: ";
	cin>>curso;
	cout<<"INGRESE LA PRIMERA NOTA: ";
	cin>>n1;
	cout<<"INGRESE LA SEGUNDA NOTA: ";
	cin>>n2;
	cout<<"INGRESE LA TERCERA NOTA: ";
	cin>>n3;
	cout<<"INGRESE LA CUARTA NOTA: ";
	cin>>n4;
	
	cout<<"Desea Agregar otro Estudiante (s/n):";
	cin>>continuar;
	if(continuar=='s' || continuar=='S');{
		
	fflush(stdin);
	
	};


	

	//instancia de un objeto
	
	promedio obj = promedio(cod,nombres,apellidos,curso,n1,n2,n3,n4);
	obj.mostrar();
	
		

	
	
}
