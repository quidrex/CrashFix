#include "stdafx.h"
#include "DirectInput8A.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
	return TRUE;
}

HRESULT APIENTRY DirectInput8Create(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID *ppvOut, LPUNKNOWN punkOuter) {
	*ppvOut = (LPVOID) new DirectInput8A();
	return S_OK;
}
