# include "Forense.hpp"
# include "Persona.hpp"
# include "Caso.hpp"
# include <string>
# include <vector>
# include <sstream>

using namespace std;

Forense::Forense(string fechaIngre, string horario):fechaIngre(fechaIngre), horario(horario){}
	Forense::Forense(const Forense& other):Persona(other)fechaIngre(other.fechaIngre), horario(other.horario){}
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
	string visualizarCaso(vector<Caso> homicidios)const{
		stringstream ss;
		ss << "Los homicidios encontrados son......\n";
		for(int i=0; i < homicidios.size(); i++){
			ss << "# " << i << " " << homicidios[i];
			ss << "\n";
		}
		return ss.str();
	}
	string Forense::toString()const{
		stringstream ss;
		ss << "Fecha de ingreso: " << fechaIngre
		<< "Horario: " << horario;

		return ss.str();
	}