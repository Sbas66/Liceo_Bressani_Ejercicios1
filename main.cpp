#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
	string nombres[10];
	int notas[10];
	int m;
	int suma;
	int b=0;
int main(){
	 cout<<"Bienvenido al menu, elija una opcion"<<endl;
while (m != 5){

 cout<<"Opcion 1: Nombres y Apellidos"<<endl;
 cout<<"Opcion 2: Notas"<<endl;
 cout<<"Opcion 3: Visualización de notas"<<endl;
 cout<<"Opcion 4: Promedio total"<<endl;
 cout<<"Opcion 5: Salir"<<endl;
 cin>>m;



switch(m){
case 1:	cout<<"Por favor, coloque los nombres y apellidos, separarlos por un guión bajo"<<endl;
	for(int i=0; i<10; i++){
		
	 cin>>nombres[i];
	}
break;
case 2:	cout<<"Por favor, coloque las notas"<<endl;
	
	for(int i=0; i<10; i++){
		
	 cin>>notas[i];
	}
break;	
case 3:	cout<<"El listado de nombres es: "<<endl;
	for(int j=0; j<10; j++){
	cout<<nombres[j]<<" "<<notas[j]<<endl;
	}
break;
case 4:	
	for(int i=0; i<10; i++){    
	suma+= b + notas[i];
	}  
    cout<<"El promedio es: "<<suma<<endl;
break;
}
}
}

