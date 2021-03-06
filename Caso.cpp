#include "Caso.hpp"
#include "Evidencia.hpp"
#include "Investigador.hpp"
#include <string>
#include <sstream>

using namespace std;

Caso::Caso(){

}
Caso::~Caso(){

}
Caso::Caso(const Caso& other):caso(other.caso), hora(other.hora), fecha(other.fecha), cerrado(other.cerrado){
	for(int i = 0; i < other.investigadores.size(); i++){
		investigadores.push_back(other.investigadores[i]);
	}
	for(int i = 0; i < other.evidencias.size(); i++){
		evidencias.push_back(other.evidencias[i]);
	}
}
int Caso::getCaso()const{
	return caso;
}
void Caso::setCaso(int caso){
	this->caso = caso;
}
void Caso::addInvestigador(Investigador persona){
	investigadores.push_back(persona);
}
void Caso::modInvestigador(int index, Investigador persona){
	investigadores[index] = persona;
}
void Caso::delInvestigador(int index){
	investigadores.erase(investigadores.begin()+index);
}
void Caso::addEvidencia(Evidencia material){
	evidencias.push_back(material);
}
void Caso::modEvidencia(int index, Evidencia material){
	evidencias[index] = material;
}
void Caso::delEvidencia(int index){
	evidencias.erase(evidencias.begin() + index);
}
const vector<Investigador>& getInvestigadores()const{
	return investigadores;
}
const vector<Evidencia>& getEvidencias()const{
	return evidencias;
}
void Caso::setHora(string hora){
	this->hora = hora;
}
string Caso::getHora()const{
	return hora;
}
void Caso::setFecha(string fecha){
	this->fecha = fecha;
}
string Caso::getFecha()const{
	return fecha;
}
void Caso::setCerrado(bool cerrado){
	this->cerrado = cerrado;
}
bool Caso::isCerrado()const{
	return cerrado;
}
string Caso::toString()const{
	stringstream ss;
	ss 	<< "Caso# " << caso << endl
		<< "Investigadores: " << investigadores.size() << endl
		<< "Evidencias: " << evidencias.size() << endl
		<< "Hora: " << hora << endl
		<< "Fecha: " << fecha << endl
		<< "El caso ";
	if(!cerrado)
		ss << "no ";
	ss <<"esta cerrado.";
	return ss.str();
}