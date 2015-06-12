#pragma once
#include <string>
#include "Investigador.hpp"
#include "Evidencia.hpp"


using std::string;

class Caso{
private:
	int caso; //Numero de caso, NO ES LA CANTIDAD DE CASOS!
	vector<Investigador> investigadores; //atendiendo el caso
	vector<Evidencia> evidencias; //encontrada
	string hora;
	string fecha;
	bool cerrado; //esta el caso cerrado?
public:
	Caso();
	~Caso();
	int getCaso()const;
	void setCaso(int);
	void addInvestigador(Investigador);
	void modInvestigador(int index, Investigador);
	void delInvestigador(int index);
	void addEvidencia(Evidencia);
	void modEvidencia(int index, Evidencia);
	void delEvidencia(int index);
	void setHora(string);
	string getHora()const;
	void setFecha(string);
	string getFecha()const;
	void setCerrado(bool);
	bool isCerrado()const;
	string toString()const;
};