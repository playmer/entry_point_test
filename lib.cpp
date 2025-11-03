
#include "lib.h"

#ifdef WIN32
#include <Windows.h>

#ifdef UNICODE

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
    MyCoolMainFunction(0, nullptr);
    return 0;
}

int wmain( int argc, wchar_t *argv[ ] )
{
    MyCoolMainFunction(0, nullptr);
    return 0;
}

#else

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow)
{
    MyCoolMainFunction(0, nullptr);
    return 0;
}

int main( int argc, wchar_t *argv[ ] ) {
    MyCoolMainFunction(0, nullptr);
    return 0;
}

#endif

#else

int main(int argc, char** argv) {
    MyCoolMainFunction(0, nullptr);
    return 0;
}

#endif