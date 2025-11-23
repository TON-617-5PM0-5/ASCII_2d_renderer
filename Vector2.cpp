#include "Vector2.h"

Vector2::Vector2() : x(0), y(0) {};
Vector2::Vector2(int _x, int _y) : x(_x), y(_y) {};

Vector2 operator+(Vector2& o1, Vector2& o2) {
	return Vector2(o1.x + o2.x, o1.y + o2.y);
};

Vector2 operator-(Vector2& o1, Vector2& o2) {
	return Vector2(o1.x - o2.x, o1.y - o2.y);
};

Vector2 operator*(Vector2& o1, Vector2& o2) {
	return Vector2(o1.x * o2.x, o1.y * o2.y);
};

Vector2 operator*(Vector2& o1, int o2) {
	return Vector2(o1.x * o2, o1.y * o2);
};

Vector2 operator*(int o2, Vector2& o1 ) {
	return Vector2(o1.x * o2, o1.y * o2);
};

Vector2 operator/(Vector2& o1, Vector2& o2) {
	return Vector2(o1.x / o2.x, o1.y / o2.y);
};

Vector2 operator/(Vector2& o1, int o2) {
	return Vector2(o1.x / o2, o1.y / o2);
};

Vector2 operator/(int o1, Vector2& o2) {
	return Vector2(o1 / o2.x, o1 / o2.y);
};

Vector2 Vector2::operator-() {
	return Vector2(-this->x, -this->y);
}

short Vector2::sign() {
	short res = 1;
	if (this->x < 0) --res;
	if (this->y < 0) --res;
	return res;
};

long int Vector2::product() {
	return this->x * this->y;
}