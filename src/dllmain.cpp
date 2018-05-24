/*
    CONTRIBUTORS:
        Sean Pesce

*/

#include "main.h"
#include "d3d11\main.h"

BOOL APIENTRY DllMain(HMODULE h_module, DWORD  ul_reason_for_call, LPVOID lp_reserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        d3d11::hook_exports();
        break;

    case DLL_THREAD_ATTACH:

        break;

    case DLL_THREAD_DETACH:

        break;

    case DLL_PROCESS_DETACH:

        break;
    }
    return TRUE;
}

