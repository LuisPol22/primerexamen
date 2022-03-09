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
		
		promedio(string cod, string nom, string ape, string cur, int n1,int n2,int n3,int n4): Estudiante(nom,ape,cur,n1,n2,n3,n4){
		
		}
		

	
	//get mostrar
	string getCod(){return cod;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getCurso(){return curso;}
	int getN1(){return n1;}
	int getN2(){return n2;}
	int getN3(){return n3;}
	int getN4(){return n4;}
		
	//metodos	
		
	void mostrar (){
		cout<<"___________"<<endl;
		cout<<cod<<";"<<nombres<<";"<<apellidos<<";"<<curso<<";"<<n1<<";"<<n2<<";"<<n3<<";"<<n4<<endl;
	}
};

