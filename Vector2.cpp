#include "Vector2.h"

Vector2::Vector2() : x(0), y(0) {};
Vector2::Vector2(int _x, int _y) : x(_x), y(_y) {};

short Vector2::sign() {
	short res = 1;
	if (this->x < 0) --res;
	if (this->y < 0) --res;
	return res;
};

long int Vector2::product() {
	return this->x * this->y;
}