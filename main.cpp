# include "Caso.hpp"
# include "Homicidio.hpp"
# include "Persona.hpp"
# include "PersonalAdmin.hpp"
# include "Secuestro.hpp"
# include "Investigador.hpp"
# include "Evidencia.hpp"
# include <iostream>
# include <string>
# include <vector>

using namespace std;

void agregarPersonal();
void agregarEvidencia();
void agregarCaso();
void printPersonal();   	//IMPRIMIR LOS INDICES TAMBIEN, solo mostrar: 'usuario' y 'NOMBRE REAL'
void printCaso();      		//IMPRIMIR LOS "INDICES" TAMBIEN, solo mostrar: el numero de caso(INDICES+1), cantidad de investigadores y cantidad de evidencia 
void printEvidencia();      //IMPRIMIR LOS INDICES TAMBIEN, solo mostrar: el toString(); //por ahora
void menuDeAutenticar();
int login(); // return 1 == PersonalAdmin; return 2 == Investigador, return 3 == Forense

void agre

int main(int argc, char* argv[]){
	char opc;

	vector<Persona> personas;
	vector<Evidencia> evidencias;
	vector<Caso> casos;

	do{
		cout<<"-----MENU PRINCIPAL----"
		    <<"1) Agregar"<<endl
		    <<"2) Modificar"<<endl
			<<"3) Eliminar"<<endl
			<<"4) Autenticar"<< enld;
		cin >> opc;
	}while(opc<'1' || opc >'4');
	switch(opc){
		case'1':
			do{
				cout<<"1) Personal"<< endl
					<<"2) Caso"<<endl
					<<"3) Regresar"<< endl
				cin >> opc;
			}while(opc<'1' || opc >'3');
			switch(opc){
				case'1':
					agregarPersonal();
					break;
				case'2':
					agregarCaso();
					break;
				default:
					break;
			}
			break;
		case'2':
			do{
				cout<<"1) Personal"<< endl
					<<"2) Caso"<<endl
					<<"3) Regresar"<< endl
				cin >> opc;
			}while(opc<'1' || opc >'3');
			switch(opc){
				case'1':{
					printPersonal();
					int index;
					cout << "Ingrese el indice de Personal que desea modificar: ";
					cin >> index;
					personas.erase(personas.begin() + index);
					agregarPersonal();
					break;
				}case'2':{
					printCaso();
					int index;
					cout << "Ingrese el indice de Caso que desea modificar: ";
					cin >> index;
					casos.erase(casos.begin() + index);
					agregarCaso();
					break;
				}default:
					break;
			}
			break;
		case'3':
			do{
				cout<<"1) Personal"<< endl
					<<"2) Caso"<<endl
					<<"3) Regresar"<< endl
				cin >> opc;
			}while(opc<'1' || opc >'3');
			switch(opc){
				case'1':{
					printPersonal();
					int index;
					cout << "Ingrese el indice de Personal que desea eliminar: ";
					cin >> index;
					personas.erase(personas.begin() + index);
					break;
				}case'2':{
					printCaso();
					int index;
					cout << "Ingrese el indice de Caso que desea elminar: ";
					cin >> index;
					casos.erase(casos.begin() + index);
					break;
				}default:
					break;
			}
			break;
		case'4':
			menuDeAutenticar();
			break;
		default:
			cout << "SI VES ESTE MENSAJE ES PORQUE HAN HACKEADO TU COMPUTADORA!";
			break;
	}
}

void agregarPersonal(){

}
void agregarEvidencia(){

}
void agregarCaso(){

}
void printPersonal(){

}
void printCaso(){

}
void menuDeAutenticar(){
	char opc;
	int tipo = login();
	do{
		cout<<"-----MENU ADMINISTRATIVO----"
		cout<<"1) Visualizar Casos"
		if(tipo == 1){
		//PersonalAdmin

		}else if(tipo == 2){
		//Investigador

		}else if(tipo == 3){
		//Forense

		}else{
			cout<<"Preocupate si ves esto!"<<endl;
		}
	}while(opc)
}
void login(){

}