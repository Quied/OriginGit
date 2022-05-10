#include "Take.h"

#include <typeinfo>


int main() {


	tain<int> *th = new tain<int>();

	auto tn = std::make_unique<tain<int>>();



//	auto dl{ th->multiply(23, 235, 623, 12, 4.4) };


	 delete th;
}