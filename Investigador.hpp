# pragma once
# include "Persona.hpp"
# include <string>

using std::string;
using namespace std;

class Investigador:public Persona{
public:
	Investigador(int, int, int);
	Investigador();
	~Investigador();
	void setCasosAttend(int);
	void setCasosClosed(int);
	void setCasosUnsolved(int);
	int getCasosAttend()const;
	int getCasosClosed()const;
	int getCasosUnsolved()const;
	string toString()const;
private:
	int casosAttend;
	int casosClosed;
	int casosUnsolved;
};