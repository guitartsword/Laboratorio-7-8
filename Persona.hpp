# pragma once
# include <string>
# include <vector>
# include "Caso.hpp"

using std::string;

class Persona{
public:
	Persona(string, string, string, int, string, string);
	Persona(const Persona&);
	Persona();
	virtual~Persona();//sin usar
	string getNombreReal()const;
	string getNombreUser()const;
	string getPassword()const;
	int getEdad()const;
	string getCedula()const;
	string getBirthday()const;
	void setNombreReal(string);
	void setNombreUser(string);
	void setPassword(string);
	void setEdad(int);
	void setCedula(string);
	void setBirthday(string);
	virtual string toString()const;
	virtual string visualizarCaso(vector<Caso>)const=0;
private:
	string nombreReal;
	string nombreUser;
	string password;
	int edad;
	string cedula;
	string birthday;
};