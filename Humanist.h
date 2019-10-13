#include "Space_object.h"

#ifndef HUMANIST_H
#define HUMANIST_H

class Humanist: public Space_object {
	public:
		Humanist(int hp, int lvl);
		void set_lvl(int lvl);
		int get_lvl();
	private:
		int lvl;
		void move();
		void die();
};

#endif
