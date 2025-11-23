#include "Charimg.h"

Charimg::Charimg(Vector2 &_size, std::vector<char> &_data) : pixels(_data) {
	if (_size.sign() == 1) {
		this->size = _size;
	}
	if (_size.product() < _data.size()) {
		throw "data is too big";
	}
	return;
};

size_t Charimg::get_characters_amount() {
	return this->pixels.size();
};
int Charimg::get_width() {
	return this->size.x;
};
int Charimg::get_height() {
	return this->size.y;
};
Vector2 Charimg::get_size() {
	return this->size;
};
std::vector<char> Charimg::get_data() {
	return this->pixels;
};