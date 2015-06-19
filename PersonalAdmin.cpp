# include "PersonalAdmin.hpp"
# include "Persona.hpp"
# include <string>
# include <sstream>

using std::string;

PersonalAdmin::PersonalAdmin(string puesto, string clave):puesto(puesto), clave(clave){}
PersonalAdmin::PersonalAdmin(const PersonalAdmin& other):Persona(other), puesto(other.puesto), clave(other.clave){}
PersonalAdmin::PersonalAdmin(){}//constructor vacio
PersonalAdmin::~PersonalAdmin(){}// sin usar
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