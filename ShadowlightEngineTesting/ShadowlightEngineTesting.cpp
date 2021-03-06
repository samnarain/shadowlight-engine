#include "stdafx.h"
#include "ShadowlightEngineTesting.h"
#include <ShadowlightEngine.h>


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	ShadowlightEngine* pEngine = new ShadowlightEngine();

	bool init = pEngine->InitializeEngine("Shadowlight Engine Testing Application", 800, 600,false);

	pEngine->Run();

	return 0;
}