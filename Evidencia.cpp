# include "Evidencia.hpp"
# include <string>
# include <sstream>

using namespace std;

Evidencia::Evidencia(string nombre, string tipo, string lugar, bool huellas, bool procesado){
	this->nombre = nombre;
	this->tipo = tipo;
	this->lugar = lugar;
	this->huellas = huellas;
	this->procesado = procesado;
}
Evidencia::Evidencia(){}//constructor vacio
Evidencia::~Evidencia(){}//sin uso
string Evidencia::getNombre()const{
	return nombre;
}
string Evidencia::getTipo()const{
	return tipo;
}
string Evidencia::getLugar()const{
	return lugar;
}
bool Evidencia::isPrinted()const{
	return huellas;
}
bool Evidencia::isProcessed()const{
	return procesado;
}
void Evidencia::setNombre(string nombre){
	this->nombre = nombre;
}
void Evidencia::setTipo(string tipo){
	this->tipo = tipo;
}
void Evidencia::setHuellas(bool huellas){
	this->huellas = huellas;
}
void Evidencia::setProcesado(bool procesado){
	this->procesado = procesado;
}
string Evidencia::toString()const{
	stringstream ss;
	ss << "Nombre: " << nombre
	<< "\nTipo: " << tipo
	<< "\nLugar: " << lugar;
	if(huellas == true)
		ss << "\nTiene huellas";
	else
		ss << "\nNo tiene huellas";
	if(procesado == true)
		ss << "\nEsta procesado";
	else
		ss << "\nNo esta procesado";

	return ss.str();
}