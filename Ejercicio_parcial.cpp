#include <iostream>
#include <conio.h>

using namespace std; 

struct Promedio{
	float n1,n2,n3,n4; 
	
};

struct Alumno{
	char nombre [50]; 
	char apellido [50];
	int condigo;
	char curso[50];
		struct Promedio prom;
}alumnos;


int main(){
	float promedio_alumno;

	cout<<"****** DATOS DEL ALUMNO ******* \n"<<endl;
	cout<<"Ingrese el nombre del alumno"<<endl; 
	cin.getline(alumnos.nombre,50,'\n');
	cout<<"Ingrese el apellido del alumno"<<endl; 
	cin.getline(alumnos.apellido,50);
	cout<<"Ingrese el curso "<<endl; 
	cin.getline(alumnos.curso,50);
	cout<<"Ingrese el codigo del alumno"<<endl; 
	cin>>alumnos.condigo;
	cout<<" \n ";
	cout<<"*******************************"<<endl;
	
	cout<<"\n";
	cout<<"****** NOTAS DEL ALUMNO ******* \n"<<endl;
	cout<<"ingrese nota 1: "; cin>>alumnos.prom.n1;
	cout<<"ingrese nota 2: "; cin>>alumnos.prom.n2; 
	cout<<"ingrese nota 3: "; cin>>alumnos.prom.n3;
	cout<<"ingrese nota 4: "; cin>>alumnos.prom.n4;
	cout<<" \n ";
	cout<<"*******************************"<<endl;
	promedio_alumno= (alumnos.prom.n1+alumnos.prom.n2+alumnos.prom.n3+alumnos.prom.n4)/4;
	
	cout<<"\n";
	cout<<"****** PROMEDIO DEL ALUMNO ******* \n"<<endl;
	cout<<"Codigo: "<<alumnos.condigo<<endl;
	cout<<"Nombre: "<<alumnos.nombre<<endl;
	cout<<"Nombre: "<<alumnos.apellido<<endl;
	cout<<"Nombre: "<<alumnos.curso<<endl;
	cout<<"promedio: "<<promedio_alumno<<endl;
	
	if (promedio_alumno>60){
		cout<<"APROBADO"<<endl;
	}else {
		cout<<"REPROBADO"<<endl;
	}
	cout<<" \n ";
	cout<<"*******************************"<<endl;
	

cout<<"\n";
system("pause"); 	
return 0; 	
}



