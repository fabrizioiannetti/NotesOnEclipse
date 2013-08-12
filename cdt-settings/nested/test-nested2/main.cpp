#include <secondary.h>
#include <root.h>

int main(int argc, const char* argv[]) {
#if defined(ROOT_IS_INCLUDED)
	Secondary a;
#endif
	a.print();
	return 0;
}
