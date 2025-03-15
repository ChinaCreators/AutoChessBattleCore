#include "AutoChessBattleCoreExampleImplement.h"

// you should export your implement like this
extern "C"
{
	__declspec(dllexport) AutoChessBattleCore::AutoChessBattleCoreInterface* GetAutoChessBattleCoreImplement()
	{
		return new AutoChessBattleCore::AutoChessBattleCoreExampleImplement();
	}

	__declspec(dllexport) void ReleaseAutoChessBattleCoreImplement(AutoChessBattleCore::AutoChessBattleCoreInterface* implement)
	{
		delete implement;
	}
}