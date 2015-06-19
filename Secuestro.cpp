#include "Secuestro.hpp"
#include "Caso.hpp"
#include <string>
#include <sstream>

using std::string;
using std::streamstring;


Secuestro(){

}
Secuestro(const Secuestro& other):Caso(other), nameVictim(other.nameVictim), motivo(other.motivo), rescate(other.rescate), victimVivo(other.victimVivo), cashRescate(other.cashRescate){

}
virtual ~Secuestro(){}
string getNameVictim()const{
	return nameVictim;
}
string getMotivo()const{
	return motivo;
}
bool isRescate()const{
	return rescate;
}
bool isVictimVivo()const{
	return victimVivo;
}
double getCashRescate()const{
	return cashRescate;
}
void setNameVictim(string nameVictim){
	this->nameVictim = nameVictim;
}
void setMotivo(string motivo){
	this->motivo = motivo;
}
void setRescate(bool){
	this->rescate = rescate;
}
void setVictimVivo(bool){
	this->victimVivo = victimVivo;
}
void setCashRescate(double){
	this->cashRescate = cashRescate;
}
/*
asdlkjdsalkjdsadsalkjsdalkj
*/
string toString()const{
	stringstream ss;
	ss << Caso.toString() << endl
	   << "Nombre de la victima: " << nameVictim << endl
	   << "Motivo: " << motivo << endl;
  	if (!rescate)
		ss << "No ";
	ss << "se solicito un rescate";
	if(rescate){
		ss << endl;
		ss "Se piden: " << cashRescate << " por el rescate";
		if(Caso.isCerrado()){
			ss << "La victima esta: ";
			if(victimVivo){
				ss << "Viva";
			}else{
				ss << "Muerta";
			}
		}
	}
	retrun ss.str();
}