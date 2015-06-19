exe: main.o Persona.o PersonalAdmin.o Investigador.o Investigador.o Forense.o Evidencia.o Caso.o Homicidio.o Secuestro.o
	g++ main.o Persona.o PersonalAdmin.o Investigadro.o Investigador.o Evidencia.o Caso.o Homicidio.o Secuestro.o -o exe
main.o: main.cpp Persona.o PersonalAdmin.o Investigadro.o Investigador.o Evidencia.o Caso.o Homicidio.o Secuestro.o
	g++ -c main.cpp
Persona.o: Persona.hpp Persona.cpp
	g++ -c Persona.cpp
PersonalAdmin.o: PersonalAdmin.cpp PersonalAdmin.hpp Persona.hpp Caso.hpp
	g++ -c PersonalAdmin.cpp
Investigador.o: Investigador.cpp Investigador.hpp Persona.hpp Caso.hpp
	g++ -c Investigador.cpp
Forense.o: Forense.cpp Forense.hpp Persona.hpp Caso.hpp
	g++ -c Forense.cpp
