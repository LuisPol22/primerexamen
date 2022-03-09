#include <iostream>
#include <string.h>
using namespace std;

class Estudiante{
	//atributos
	protected : string nombres, apellidos, curso;
				int n1,n2,n3,n4;
	//constructor
	protected:
		Estudiante(){
			
		}
			Estudiante(string nom, string ape, string cur, int n1,int n2,int n3,int n4){
				nombres=nom;
				apellidos=ape;
				curso=cur;
				
			
		}
	//metodo
	void mostrar();
 };
