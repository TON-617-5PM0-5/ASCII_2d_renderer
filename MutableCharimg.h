#pragma once
#include "Charimg.h"
#include "Vector2.h"
#include <Vector>

class MutableCharimg : public Charimg {
private:
public:
	void freeze();

	void fill(char with);
	void set(Vector2 position, char to);

	void rectangle(Vector2 arg1, Vector2 arg2);
	void line(Vector2 arg1, Vector2 arg2);

	char get(Vector2 position);

	void load(Vector2 size, std::vector<char> pixels);
	void load(Charimg& reference);


	MutableCharimg(Vector2 size);
	MutableCharimg(Charimg& reference); // from Charimg
};