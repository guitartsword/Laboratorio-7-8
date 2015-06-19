# pragma once
# include "Persona.hpp"
# include <string>

using namespace std;

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
	virtual string visualizarCaso(vector<Caso*> homicidios)const;
	virtual string toString()const;

private:
	string fechaIngre;
	string horario;
};