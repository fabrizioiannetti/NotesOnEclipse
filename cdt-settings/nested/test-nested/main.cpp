#include <definitions.h>
#include <root.h>

int main(int argc, const char* argv[]) {
#if defined(ROOT_IS_INCLUDED)
	Test1 t1;
#endif
	t1.print();
	return 0;
}
