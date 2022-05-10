#pragma once

#include <iostream>
#include <functional>
#include <thread>
#include <atomic>
#include <mutex>


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
	static auto multiply(const T& ... a, const Y& b) -> decltype(auto) {
		return (a * ... * b);
	}

public:


	//	tain(T ... a) { }

	/*

	typedef tain<T> iterator;
	typedef tain<T> const_iterator;

	tain(std::initializer_list<T> value);

	iterator begin();
	iterator end();
	*/

	std::function<void()> Foo = [=]() mutable { };

};