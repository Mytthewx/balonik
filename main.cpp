/*
 * Copyright Mytthew (c) 2020. Copying and modifying not allowed.
 * Autor: Mateusz Domagała
 * Proszę wybaczyć sposób deklaracji pól na początku klasy, ale to przyzwyczajenie z Javy.
*/
#include <iostream>
#include <math.h>
#include "balonik.cpp"
void pompuj(balonik& balon, float powietrze) {
	cout << "Pompuje balonik: " << balon.getNazwa() << endl;
	float aktualnaSrednica = balon.getSrednica();
	float srednica = (sqrt(powietrze / M_PI) * 2);
	balon.zmien_srednice(srednica);
}

int main() {
	balonik czerwony("czerwony");
	balonik zielony("zielony");
	balonik niebieski("niebieski");

	czerwony.zmien_wysokosc(20);
	czerwony.zmien_srednice(15);
	pompuj(czerwony, 15);
	czerwony.stan();

	niebieski.zmien_wysokosc(10);
	niebieski.zmien_srednice(25);
	pompuj(niebieski, 5);
	niebieski.stan();

	zielony.zmien_wysokosc(5);
	zielony.zmien_srednice(2);
	pompuj(zielony, 2);
	zielony.stan();
	return 0;
}