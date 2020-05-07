//
// Created by Mytthew on 07.05.2020.
//

using namespace std;
#include <cstring>
#include <string>
#include <iostream>

class balonik {
private:
	string nazwa;
	float wysokosc;
	float srednica;

public:
	balonik(string nazwa) {
		this->nazwa = nazwa;
		this->wysokosc = 0;
		this->srednica = 0;
	}

	const string &getNazwa() const {
		return nazwa;
	}

	float getSrednica() const {
		return srednica;
	}

	void zmien_wysokosc(float przyrostWysokosci) {
		wysokosc += przyrostWysokosci;
	}

	void zmien_srednice(float przyrostSrednicy) {
		srednica += przyrostSrednicy;
	}

	void stan() {
		cout << "Tu balonik " << nazwa << " - mam " << srednica
		     << " cm srednicy i jestem na wysokosci " << wysokosc << " m" << endl;
	}
};
