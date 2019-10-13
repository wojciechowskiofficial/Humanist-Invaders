#include "Space_object.h"

#ifndef ENGINEER_H
#define ENGINEER_H
class Engineer: public Space_object {
	public:
		Engineer(int hp);
	private:
		void shoot();
		void move();
		void die();
};
#endif
