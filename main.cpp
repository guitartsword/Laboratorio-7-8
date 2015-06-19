# include "Caso.hpp"
# include "Homicidio.hpp"
# include "Persona.hpp"
# include "PersonalAdmin.hpp"
# include "Secuestro.hpp"
# include "Investigador.hpp"
# include <iostream>
# include <string>

using namespace std;
using std::string;

int main(int argc, char* argv[]){
	cout << "Sistema de informacion" << endl;
	cout << "Que desea hacer:\n"
	<< "1)Ingresar casos y expedientes\n"
	<< "2)Modificar casos y expedientes\n"
	<< "3)Analizar casos" << endl;
	int opc = 0;
	cin >> opc;

	//Gestion de personal
	Persona persona;
	PersonalAdmin p_admin;
	Investigador investigador;
	Forense forense;
	if(opc == 1){
		cout << "1)Gestion de Personal\n"
		<< "2)Gestion de evidencias\n"
		<< "3)Gestion de casos" << endl;
		cin >> opc;
		switch(opc){
			case 1:
				cout << "1)Personal Administrativo\n"
				<< "2)Investigador\n"
				<< "3)Forense" << endl;
				cin >> opc;
				if(opc == 1){

				}
		}
	}
}