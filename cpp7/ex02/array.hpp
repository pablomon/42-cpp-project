#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	public:
	Array() : content(new T[0]), size(0) {};

	Array(unsigned int n): content(new T[n]), size(n) {
	};

	Array(const Array<T> &o) {
		size = o.size;
		content = new T[size];
		for (size_t i = 0; i < size; i++)
			content[i] = o.content[i];
	};

	~Array() { delete content; };

	Array &operator= (const Array<T> &o) {
		size = o.size;
		content = new T[size];
		for (size_t i = 0; i < size; i++)
			content[i] = o.content[i];
		return *this;		
	};

	void *operator new[] (size_t n) {
		Array<T> *array = new Array<T>((unsigned int)n);
		array->size = n;
		array->content = new T[n];
		return array;
	};

	T &operator[] (size_t n) {
		if (n < 0 || n >= size)
			throw std::exception();
		return content[n];
	}

	size_t get_size() { return size; };

	private:
	T *content;
	size_t size;
};
#endif