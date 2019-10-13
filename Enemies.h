#include "Humanist.h"
#include <vector>

#ifndef ENEMIES_H
#define ENEMIES_H
class Enemies {
	public:
		int pos_x, pos_y;
		void move();
		void create();
		void shoot();
		void kill_humanist();
	private:
		std::vector<Humanist *> humanists_vec;
		//weapon weapon;
		void move_left();
		void move_right();
		void move_down();
};
#endif
