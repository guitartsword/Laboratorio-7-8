#pragma once
#include <vector>
#include <string>
#include "Investigador.hpp"
#include "Evidencia.hpp"


using namespace std;

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
	virtual ~Caso();
	Caso(const Caso&);
	int getCaso()const;
	void setCaso(int);
	void addInvestigador(Investigador);
	void modInvestigador(int index, Investigador);
	void delInvestigador(int index);
	void addEvidencia(Evidencia);
	void modEvidencia(int index, Evidencia);
	void delEvidencia(int index);
	const vector<Investigador>& getInvestigadores()const;
	const vector<Evidencia>& getEvidencias()const;
	void setHora(string);
	string getHora()const;
	void setFecha(string);
	string getFecha()const;
	void setCerrado(bool);
	bool isCerrado()const;
	virtual string toString()const;
};