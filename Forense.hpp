# pragma once
# include "Persona.hpp"
# include <string>

using std::string;
using namespace

class Forense:public Persona{
public:
	Forense(string, string);
	Forense(const Forense&);
	Forense();
	virtual~Forense();
	string getFechaIngre()const;
	string getHorario()const;
	void setFechaIngre(string);
	void setHorario(string);
	virtual string toString()const;

private:
	string fechaIngre;
	string horario;
};