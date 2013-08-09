#include <definitions.h>

int main(int argc, const char* argv[]) {
#if defined(TEST2)
	Test2 t2;
#endif
	t2.print();
	return 0;
}
