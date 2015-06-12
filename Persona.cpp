# include "Persona.hpp"
# include <string>
# include <sstream>

using std::string;

Persona::Persona(string nombreReal, string nombreUser, string password, 
	int edad, string cedula, string birthday){
	this->nombreReal = nombreReal;
	this->nombreUser = nombreUser;
	this->password = password;
	this->edad = edad;
	this->cedula = cedula;
	this->birthday = birthday;
}
Persona::Persona(){

}
Persona::~Persona(){

}//sin usar
string Persona::getNombreReal()const{
	return nombreReal;
}
string Persona::getNombreUser()const{
	return nombreUser;
}
string Persona::getPassword()const{
	return password;
}
int Persona::getEdad()const{
	return edad;
}
string Persona::getCedula()const{
	return cedula;
}
string Persona::getBirthday()const{
	return birthday;
}
void Persona::setNombreReal(string nombreReal){
	this->nombreReal = nombreReal;
}
void Persona::setNombreUser(string nombreUser){
	this->nombreUser = nombreUser;
}
void Persona::setPassword(string password){
	this->password = password;
}
void Persona::setEdad(int edad){
	this->edad = edad;
}
void Persona::setCedula(string cedula){
	this->cedula = cedula;
}
void Persona::setBirthday(string birthday){
	this->birthday = birthday;
}
string Persona::toString(){
	stringstream ss;
	ss << "-Nombre Real: " << nombreReal  
	<< "\n-Nombre User: " << nombreUser
	<< "\n-Edad: " << edad
	<< "\n-Cedula: " << cedula
	<< "\n-Birthday: " << birthday;

	return ss.str();
}