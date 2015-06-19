exe: main.o Persona.o PersonalAdmin.o Investigador.o Investigador.o Forense.o Evidencia.o Caso.o Homicidio.o Secuestro.o
	g++ main.o Persona.o PersonalAdmin.o Investigadro.o Investigador.o Evidencia.o Caso.o Homicidio.o Secuestro.o -o exe
main.o: main.cpp Evidencia.o Persona.o PersonalAdmin.o Investigador.o Caso.o Homicidio.o Secuestro.o
	g++ -c main.cpp
Persona.o: Persona.hpp Persona.cpp Caso.o
	g++ -c Caso.o Persona.cpp
PersonalAdmin.o: PersonalAdmin.cpp PersonalAdmin.hpp Persona.hpp Caso.hpp
	g++ -c Persona.hpp PersonalAdmin.cpp
Investigador.o: Investigador.cpp Investigador.hpp Persona.hpp Caso.hpp
	g++ -c Investigador.cpp
Forense.o: Forense.cpp Forense.hpp Persona.hpp Caso.hpp
	g++ -c Forense.cpp
Evidencia.o: Evidencia.cpp Evidencia.hpp
	g++ -c Evidencia.cpp
Caso.o: Caso.cpp Caso.hpp Evidencia.o Investigador.o
	g++ -c Caso.cpp
Homicidio.o: Homicidio.cpp Homicidio.hpp
	g++ -c Homicidio.cpp
Secuestro.o: Secuestro.cpp Secuestro.hpp
	g++ -c Secuestro.cpp