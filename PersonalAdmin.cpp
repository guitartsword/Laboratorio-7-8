# include "PersonalAdmin.hpp"
# include <string>
# include <sstream>

using std::string;

PersonalAdmin::PersonalAdmin(string puesto, string clave){
	this->puesto = puesto;
	this->clave = clave;
}
PersonalAdmin::PersonalAdmin(){

}
PersonalAdmin::~PersonalAdmin(){

}// sin usar
string PersonalAdmin::getPuesto()const{
	return puesto;
}
string PersonalAdmin::getClave()const{
	return clave;
}
void PersonalAdmin::setPuesto(string puesto){
	this->puesto = puesto;
}
void PersonalAdmin::setClave(string clave){
	this->clave = clave;
}
string PersonalAdmin::toString()const{
	stringstream ss;
	ss << "-Puesto: " << puesto;
	return ss.str();
}