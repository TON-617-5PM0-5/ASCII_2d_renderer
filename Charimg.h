#pragma once
#include <vector>
#include "Vector2.h"
class Charimg
{
private:
	std::vector<char> pixels;
	Vector2 size;
public:
	//Charimg(void* loader);
	Charimg(Vector2 &_size, std::vector<char> &_data);
	size_t get_characters_amount();
	int get_width();
	int get_height();
	Vector2 get_size();
	std::vector<char> get_data();
	operator char* const () {
		return pixels.data();
	};

};

