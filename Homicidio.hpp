#pragma once
#include "Caso.hpp"
#include <string>
#include <vector>

using std::string;

class Homicidio:public Caso{
private:
	vector<string> sospechosos; //Lista de sospechosos
	string nameSospect; //NOMBRE DEL SOSPECHOSO PRINCIPAL
	string nameVictim;
	string nameCulpable;
public:
	Homicidio();
	Homicidio(const Homicidio&);
	virtual ~Homicidio();
	void addSospechoso(string);
	const vector<string> getSospechosos()const;
	string getNameSospect()const;
	string getNameVictim()const;
	string getNameCulpable()const;
	void setNameSospect(string);
	void setNameVictim(string);
	void setNameCulpable(string);
	virtual string toString()const;
};