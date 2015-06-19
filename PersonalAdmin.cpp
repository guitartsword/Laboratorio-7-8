# include "PersonalAdmin.hpp"
# include "Persona.hpp"
# include "Secuestro.hpp"
# include <string>
# include <sstream>
# include <typeinfo>

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
string visualizarCaso(vector<Caso*> secuestros)const{
	stringstream ss;
	ss << "Los secuestro Son:\n";
	for (int i = 0; i < secuestros.size(); ++i)
	{
		if(typeid(secuestros->at(i) == typeid(Secuestro)){
			ss << secuestros->at(i).toString() << "\n";
		}
	}
	return ss.str();
}
string PersonalAdmin::toString()const{
	stringstream ss;
	ss << "-Puesto: " << puesto;
	return ss.str();
}