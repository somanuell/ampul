#include <cstdint>
bool CreateQueue( const char* pszQueueName, uint32_t ClusterCount, uint32_t ClusterSize, uint32_t SlotCount, void* & hQueue ) {
	hQueue = nullptr;
	return true;
}