#include <iostream>
#include <string.h>
using namespace std;

class Estudiante{
	//atributos
	protected : string nombres, apellidos, curso;
				int n1,n2,n3,n4,pr;
	//constructor
	protected:
		Estudiante(){
			
		}
			Estudiante(string nom, string ape, string cur,int pr){
				nombres=nom;
				apellidos=ape;
				curso=cur;
				
			
		}
	//metodo
	void mostrar();
 };
