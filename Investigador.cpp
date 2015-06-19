# include "Investigador.hpp"
# include <string>
# include <sstream>

using namespace std;
using std::string;

Investigador::Investigador(int casosAttend, int casosClosed, int casosUnsolved):Persona(string nombreReal, string nombreUser,
	string password, int edad, string cedula, string birthday){
	this->casosAttend = casosAttend;
	this->casosClosed = casosClosed;
	this->casosUnsolved = casosUnsolved;
}
Investigador::Investigador(){

}
Investigador::~Investigador(){
	//sin usarlo aun....
}
void Investigador::setCasosAttend(int){
	this->casosAttend = casosAttend;
}
void Investigador::setCasosClosed(int){
	this->casosClosed = casosClosed;
}
void Investigador::setCasosUnsolved(int){
	this->casosUnsolved = casosUnsolved;
}
int Investigador::getCasosAttend()const{
	return casosAttend;
}
int Investigador::getCasosClosed()const{
	return casosClosed;
}
int Investigador::getCasosUnsolved()const{
	return casosUnsolved;
}
string Investigador::toString()const{
	stringstream ss;
	ss << "#Casos Atendidos: "<< casosAttend
	<< "#Casos cerrados: " << casosClosed
	<< "#Casos sin resolver: " << casosUnsolved;
	return ss.str();
}