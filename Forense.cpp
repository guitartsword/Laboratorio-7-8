# include "Forense.hpp"
# include "Persona.hpp"
# include <string>
# include <sstream>

using std::string;
using namespace std;

Forense::Forense(string fechaIngre, string horario):fechaIngre(fechaIngre), horario(horario){}
	Forense::Forense(const Forense&):Persona(other)fechaIngre(other.fechaIngre), horario(other.horario){}
	Forense::Forense(){}
	Forense::~Forense(){}
	string Forense::getFechaIngre()const{
		return fechaIngre;
	}
	string Forense::getHorario()const{
		return horario;
	}
	void Forense::setFechaIngre(string fechaIngre){
		this-> fechaIngre = fechaIngre;
	}
	void Forense::setHorario(string horario){	
		this->horario = horario;
	}
	string Forense::toString()const{
		stringstream ss;
		ss << "Fecha de ingreso: " << fechaIngre
		<< "Horario: " << horario;

		return ss.str();
	}