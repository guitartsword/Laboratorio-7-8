#include "Homicidio.hpp"
#include "Caso.hpp"
#include <string>
#include <sstream>
#include <vector>

using std::string;
using std::streamstring;
using std::vector;

Homicidio(){

}
Homicidio(const Homicidio& other):Caso(other), nameSospect(other.nameSospect), nameVictim(other.nameVictim), nameCulpable(other.nameCulpable){
	for(int i = 0; i < other.sospechosos.size(); i++)
		sospechosos.push_back(other.sospechosos[i]);
}
~Homicidio(){}
void addSospechoso(string sospect){
	sospechosos.push_back(string sospect);
}
const vector<string> getSospechosos()const{
	return sospechosos;
}
string getNameSospect()const{
	return nameSospect;
}
string getNameVictim()const{
	return nameVictim;
}
string getNameCulpable()const{
	if(isCerrado())
		return nameCulpable;
	return "Culpable Libre";
}
void setNameSospect(string sospect){
	nameSospect = sospect;
}
void setNameVictim(string victim){
	nameVictim = victim;
}
void setNameCulpable(string culpable){
	nameCulpable = culpable;
}
string toString()const{
	stringstream ss;
	ss << Caso.toString() << endl
	   << "Sospechoso" << sospechosos.size() << endl
	   << "Nombre del sospechoso principal: "<< nameSospect << endl
	   << "Nombre de la Victima: " << nameVictim << endl
	   << "Nombre del Culpable: " << nameCulpable << endl;
}