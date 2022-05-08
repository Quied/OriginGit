#pragma once

#include <iostream>
#include <functional>

template <typename ... T>  class tain {
public:
	
	void* operator new(size_t n) {
		void* ptr = std::malloc(n);
		if (!ptr) { throw std::bad_alloc(); }
		return ptr;
	}
	
	static void operator delete(void* ptr) {
		std::free(ptr);
	}

	auto sum(T ... _sum) {
		return (_sum + ...);
	}
	
	template <typename Y>
	static auto multiply(const T& ... a, const Y& b) -> decltype (... * b) {
		return (... * b);
	}

public:

	std::vector<T> Vec;

//	tain(T ... a) { }



};