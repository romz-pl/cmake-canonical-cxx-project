#include <iostream>

#define str(s) #s
#define xstr(s) str(s)

#if not defined(ROMZ_GIT_COMMIT)
#error "Macro [ROMZ_GIT_COMMIT] not defined"
#endif

int main()
{
    std::cout << "GIT commit: " << xstr(ROMZ_GIT_COMMIT) << std::endl;
    return 0;
}
