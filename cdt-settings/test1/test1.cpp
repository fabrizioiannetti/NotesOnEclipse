
#include <definitions.h>

void Test1::print() {
#if defined(THIS_IS_DEFINED)
	this->value++;
#endif
}
