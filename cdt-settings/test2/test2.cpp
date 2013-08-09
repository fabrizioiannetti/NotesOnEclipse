
#include <definitions.h>

void Test2::print() {
#if defined(THIS_IS_DEFINED)
	this->value++;
#endif
}
