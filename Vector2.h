#pragma once
class Vector2
{	
public:
	int x;
	int y;

	Vector2(int _x, int _y);
	Vector2();
	
	short sign();
	long int product();

	friend Vector2 operator+(Vector2& o1, Vector2& o2);

	friend Vector2 operator-(Vector2& o1, Vector2& o2);

	friend Vector2 operator*(Vector2& o1, Vector2& o2);
	friend Vector2 operator*(Vector2& o1, int o2);
	friend Vector2 operator*(int o2, Vector2& o1);

	friend Vector2 operator/(Vector2& o1, Vector2& o2);
	friend Vector2 operator/(Vector2& o1, int o2);
	friend Vector2 operator/(int o2, Vector2& o1);

	Vector2 operator-();
};

