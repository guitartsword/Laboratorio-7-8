#pragma once
#include "Caso.hpp"
#include <string>

using std::string

class Secuestro():public Caso{
private: 
	string nameVictim, motivo;
	bool rescate, victimVivo;
	double cashRescate;
public:
	Secuestro();
	Secuestro(const Secuestro&);
	virtual ~Secuestro();
	string getNameVictim()const;
	string getMotivo()const;
	bool isRescate()const;
	bool isVictimVivo()const;
	double getCashRescate()const;
	void setNameVictim(string);
	void setMotivo(string);
	void setRescate(bool);
	void setVictimVivo(bool);
	void setCashRescate(double);
	string toString()const;
};