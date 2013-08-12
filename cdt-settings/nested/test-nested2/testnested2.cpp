
#include <secondary.h>

void Secondary::print() {
#if defined(THIS_IS_DEFINED)
	this->value++;
#endif
}
