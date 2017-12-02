#include "StarEngine.h"

int main()
{
	StarEngine engine;
	engine.Init("MicroBoats", "", RESOLUTION_1280x720);
	engine.Run();
	engine.Shut();
	return 0;
}
