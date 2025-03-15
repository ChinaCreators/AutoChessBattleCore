#include "AutoChessBattleCoreExampleImplementation.h"

// you should export your implement like this
extern "C"
{
	__declspec(dllexport) AutoChessBattleCore::AutoChessBattleCoreInterface* GetAutoChessBattleCoreImplementation()
	{
		return new AutoChessBattleCore::AutoChessBattleCoreExampleImplementation();
	}

	__declspec(dllexport) void ReleaseAutoChessBattleCoreImplementation(AutoChessBattleCore::AutoChessBattleCoreInterface* implement)
	{
		delete implement;
	}
}