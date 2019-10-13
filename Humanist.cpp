#include "Humanist.h"

Humanist::Humanist(int hp, int lvl): Space_object(hp) {
	this->hp = hp;
	this->lvl = lvl;
}

void Humanist::set_lvl(int lvl) {
	this->lvl = lvl;
}

int Humanist::get_lvl() {
	return this->lvl;
}

void Humanist::move() {
}

void Humanist::die() {
}
