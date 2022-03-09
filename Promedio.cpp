#include<iostream>

#include "Estudiante.cpp"

using namespace std;

class promedio:Estudiante {
	//atributo
	private: string cod;
	
	//constuctor
	public:
		promedio(){
			
		}
		
		promedio(string cod, string nom, string ape, string cur, int pr): Estudiante(nom,ape,cur,pr){
		
		}
		

	
	//get mostrar
	string getCod(){return cod;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getCurso(){return curso;}
	int getPR(){return pr;}

	//metodos	
		
	void mostrar (){
		cout<<"___________"<<endl;
		cout<<cod<<";"<<nombres<<";"<<apellidos<<";"<<curso<<";"<<pr<<endl;
	}
};

