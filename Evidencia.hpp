# pragma once 
# include <string>

 using namespace std;

 class Evidencia{
 public:
 	Evidencia(string, string, string, bool, bool);
 	Evidencia();
 	~Evidencia();
 	string getNombre()const;
 	string getTipo()const;
 	string getLugar()const;
 	bool isPrinted()const;
 	bool isProcessed()const;
 	void setNombre(string);
 	void setTipo(string);
 	void setHuellas(bool);
 	void setProcesado(bool);
 	string toString()const;
 
private:
	string nombre;
	string tipo;
	string lugar;
	bool huellas;
	bool procesado;
 };