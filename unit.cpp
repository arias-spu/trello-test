#include "product.h"
#include <cassert>

int main(int argc, char* argv[]){
	Product product("Soap", 12.95, 10);
	assert(product.GetPrice() == 12.95);
	return 0;
}
