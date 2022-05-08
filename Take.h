#pragma once

#include <iostream>
#include <functional>

template <typename T>
class tain {
public:

	void* operator new(size_t n) {
		void* ptr = std::malloc(n);
		if (!ptr) { throw std::bad_alloc(); }
		return ptr;
	}
	.


	static void operator delete(void* ptr) {
		std::free(ptr);
	}

public:

	std::function<void()> tm = [=]<T>() {	};


};