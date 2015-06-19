# include "Investigador.hpp"
# include "Persona.hpp"
# include <string>
# include <sstream>

using namespace std;
using std::string;

Investigador::Investigador(int casosAttend, int casosClosed, int casosUnsolved):casosAttend(casosAttend), 
	casosClosed(casosClosed),casosUnsolved(casosUnsolved){}
Investigador::Investigador(const Investigador& other):Persona(other), casosAttend(other.casosAttend),
casosClosed(other.casosClosed),casosUnsolved(other.casosUnsolved){}
Investigador::Investigador(){}//constructor vacio
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
string visualizarCaso(vector<Caso*> lista){
	for(int i = 0; i < lista.size(); i++){
		ss << "# " << i << " " << lista->at(i).toString
		   << "\n";
	}
}