#include <definitions.h>

int main(int argc, const char* argv[]) {
#if defined(TEST1)
	Test1 t1;
#endif
	t1.print();
	return 0;
}
