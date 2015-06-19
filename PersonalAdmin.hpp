# pragma once
# include "Persona.hpp"
# include <string>

using std::string;

class PersonalAdmin:public Persona{
public:
	PersonalAdmin(string, string);
	PersonalAdmin(const PersonalAdmin&);
	PersonalAdmin();
	virtual ~PersonalAdmin();// si usar
	string getPuesto()const;
	string getClave()const;
	void setPuesto(string);
	void setClave(string);
	virtual string toString()const; 
private:
	string puesto;
	string clave;
};