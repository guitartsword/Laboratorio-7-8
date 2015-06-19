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
void printPersonal(vector<Persona>);   	//IMPRIMIR LOS INDICES TAMBIEN, solo mostrar: 'usuario' y 'NOMBRE REAL'
void printCaso(vector<Caso>);      		//IMPRIMIR LOS "INDICES" TAMBIEN, solo mostrar: el numero de caso(INDICES+1), cantidad de investigadores y cantidad de evidencia 
void printEvidencia(vector<Evidencia>);      //IMPRIMIR LOS INDICES TAMBIEN, solo mostrar: el toString(); //por ahora
void menuDeAutenticar(const vector<Persona>&);
Persona login();


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
					printPersonal(personas);
					int index;
					cout << "Ingrese el indice de Personal que desea modificar: ";
					cin >> index;
					personas.erase(personas.begin() + index);
					agregarPersonal();
					break;
				}case'2':{
					printCaso(casos);
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
					printPersonal(personas);
					int index;
					cout << "Ingrese el indice de Personal que desea eliminar: ";
					cin >> index;
					personas.erase(personas.begin() + index);
					break;
				}case'2':{
					printCaso(casos);
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
			menuDeAutenticar(personas);
			break;
		default:
			cout << "SI VES ESTE MENSAJE ES PORQUE HAN HACKEADO TU COMPUTADORA!";
			break;
	}
}

void agregarPersonal(){
	string nombreReal, nombreUser, password, cedula, birthday;
	string c_ingreso;
	int edad, p_organigrama, n_atend = 0, c_closed = 0, c_unsolved = 0;
	int opc_ap = 0;
	int f_ingreso, i_horario;
	cout << "Tipo-----\n" 
	<< "1)Personal Admin\n"
	<< "2)Investigador\n3)Forense" << endl;
	cin >> opc_ap;
	cout << "Nombre Real = " ;
	cin >> nombreReal;
	cout << "Nombre de usuario = ";
	cin >> nombreUser;
	cout << "Password = ";
	cin >> password;
	cout << "Cedula = ";
	cin >> cedula;
	cout << "Birthday = ";
	cin >> birthday;
	if(opc_ap == 1){
		cout << "Clave de ingreso al sistema =";
		cin >> c_ingreso;
		cout << "Puesto de organigrama = ";
		cin >> p_organigrama;
		PersonalAdmin p_admin();
		p_admin.setNombreReal(nombreReal);
		p_admin.setNombreUser(nombreUser);
		p_admin.setPassword(password);
		p_admin.setCedula(cedula);
		p_admin.setBirthday(birthday);
		p_admin.setPuesto(p_organigrama);
		p_admin.setClave(c_ingreso);
		cout << "Exito!!!" << endl;
	}else{
		if(opc_ap == 2){
			cout << "Ingrese los numeros de casos atendidos" << endl;
			cin >> n_atend;
			cout << "Casos cerrados = ";
			cin >> c_closed;
			cout << "Casos sin resolver = ";
			cin >> c_unsolved;
			Investigador inv();
			inv.setNombreReal(nombreReal);
			inv.setNombreUser(nombreUser);
			inv.setPassword(password);
			inv.setCedula(cedula);
			inv.setBirthday(birthday);
			inv.setCasosAttend(n_atend);
			inv.setCasosClosed(c_closed);
			inv.setCasosUnsolved(c_unsolved);
			cout << "Exito!!!" << endl;
		}else{
			if(opc_ap == 3){
				cout << "Fecha de ingreso = ";
				cin >> f_ingreso;
				cout << "Horario = ";
				cin >> i_horario;
				Forense forense();
				forense.setNombreReal(nombreReal);
				forense.setNombreUser(nombreUser);
				forense.setPassword(password);
				forense.setCedula(cedula);
				forense.setBirthday(birthday);
				forense.setFechaIngre(f_ingreso);
				forense.setHorario(i_horario);
				cout << "Exito!!" << endl;
			}
		}
	}
	
}
void agregarEvidencia(){
	string n_evidencias, t_evidencias, l_evidencias;
	bool huella;
	bool process;
	int opc_ap;
	cout << "Nombre = ";
	cin >> n_evidencias;
	cout << "tipo = ";
	cin >> t_evidencias;
	cout << "lugar = ";
	cin >> l_evidencias;
	cout << "Tiene huellas 1)Si;2)No = ";
	cin >> opc_ap;
	if(opc_ap == 1)
		huella = true;
	else
		huella = false;
	cout << "Procesado? 1)Si;2)NO = ";
	cin >> opc_ap;
	if(opc_ap == 1)
		process = true;
	else
		process = false;
	Evidencia evidencia(n_evidencias, t_evidencias, l_evidencias, huella, process);
	cout << "Exito!!!" << endl;

}
void agregarCaso(){
	int n_casos = 0;
	string c_hora = "";
	string c_fecha = "";
	bool cerrado = false;
	cout << "---------Agregado de casos-------" << endl;
	cout << "Numero de casos = ";
	cin >> n_casos;
	cout << "Hora = ";
	cin >> c_hora;
	cout << "Fecha = ";
	cin >> c_fecha;
	cout << "Esta cerrado 1)Si 2)No:"
	int opc_ap = 0;
	cin >> opc_ap;
	if(opc_ap == 1)
		cerrado = true;
	else
		cerrado = false;
	Caso a_caso();
	a_caso.setHora(c_hora);
	a_caso.setFecha(c_fecha);
	a_caso.setCerrado(cerrado);
	a_caso.setCaso(n_casos);
}
void printPersonal(vector<Persona> personal){
	for(int i=0; i < personal.size(); i++){
		cout << "#" << i+1 << personal[i].toString() << endl;
	}
}
void printCaso(vector<Caso> casos){
	for (int i = 0; i < casos.size(); i++){
		cout << "#" << i+1 << casos[i].toString() << endl;
	}
}
void printEvidencia(vector<Evidencia> evidencias){
	for (int i = 0; i < evidencias.size(); ++i){
		cout << "#" << i+1 << evidencias[i].toString() << endl;	
	}
}
void menuDeAutenticar(const vector<Persona>& lista){
	char opc;
	int personal = login(lista);
	if(personal != -1){
		do{
			do{
				cout<<"-----MENU ADMINISTRATIVO----"
				cout<<"1) Visualizar Casos"
				cout<<"2) Salir"
				cin >> opc;
			}while(opc < '1'  || opc > '2');
			if(opc == 1){
				cout << lista[personal].visualizarCaso(casos) << endl;
			}
		}while(opc != '2');
	}else{
		cout<<"El usuario o contrasena estan incorrects"<<endl;
	}
}
Persona login(const vector<Persona>& lista){
	int index = -1;
	string usuario, password;
	cout<<"Ingrese el usuario: "
	cin>>usuario;
	cout<<"Ingrese el pass: "
	cin>>pass;
	for(int i = 0; i < lista.size(); i++){
		if(usuario.compare(lista[i].getNombreUser())==0){
			if(pass.compare(lista[i].getPassword()==0)){
				index = i;
				break;
			}
		}
	}

}