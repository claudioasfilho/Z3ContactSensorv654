// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

#include PLATFORM_HEADER
#include CONFIGURATION_HEADER
#include "af.h"

// Init function declarations.
void emberAfInit(void);
void emberAfMainInitCallback(void);
void emberAfPluginEndDeviceSupportInitCallback(void);

void emAfInit(void)
{
  emberAfInit();
  emberAfMainInitCallback();
  emberAfPluginEndDeviceSupportInitCallback();
}

// Tick function declarations.
void emberAfMainTickCallback(void);
void emberAfPluginEndDeviceSupportTickCallback(void);
void emberAfPluginHeartbeatTickCallback(void);
void emberAfPluginIdleSleepTickCallback(void);
void emberAfTick(void);

void emAfTick(void)
{
  emberAfMainTickCallback();
  emberAfPluginEndDeviceSupportTickCallback();
  emberAfPluginHeartbeatTickCallback();
  emberAfPluginIdleSleepTickCallback();
  emberAfTick();
}

// ResetAttributes function declarations.
void emAfPluginPollControlServerResetAttributesCallback(uint8_t endpointId);

void emAfResetAttributes(uint8_t endpointId)
{
  emAfPluginPollControlServerResetAttributesCallback(endpointId);
}

// PreCommandReceived function declarations.
bool emberAfPreCommandReceivedCallback(EmberAfClusterCommand* cmd);

bool emAfPreCommandReceived(EmberAfClusterCommand* cmd)
{
  return emberAfPreCommandReceivedCallback(cmd);
}

// PreZDOMessageReceived function declarations.
bool emberAfPreZDOMessageReceivedCallback(EmberNodeId emberNodeId,EmberApsFrame* apsFrame,uint8_t* message,uint16_t length);

bool emAfPreZDOMessageReceived(EmberNodeId emberNodeId,EmberApsFrame* apsFrame,uint8_t* message,uint16_t length)
{
  return emberAfPreZDOMessageReceivedCallback(emberNodeId, apsFrame, message, length);
}

bool emAfRetrieveAttributeAndCraftResponse(uint8_t endpoint, EmberAfClusterId clusterId, EmberAfAttributeId attrId, uint8_t mask, uint16_t maunfacturerCode, uint16_t readLength)
{
  return 0; // false
}

// ZigbeeKeyEstablishment function declarations.
void emberAfPluginUpdateTcLinkKeyZigbeeKeyEstablishmentCallback(EmberEUI64 partner, EmberKeyStatus status);
void emberAfZigbeeKeyEstablishmentCallback(EmberEUI64 partner, EmberKeyStatus status);

void emAfZigbeeKeyEstablishment(EmberEUI64 partner, EmberKeyStatus status)
{
  emberAfPluginUpdateTcLinkKeyZigbeeKeyEstablishmentCallback(partner, status);
  emberAfZigbeeKeyEstablishmentCallback(partner, status);
}

// ReadAttributesResponse function declarations.
bool emberAfReadAttributesResponseCallback(EmberAfClusterId clusterId,uint8_t* buffer,uint16_t bufLen);

bool emAfReadAttributesResponse(EmberAfClusterId clusterId,uint8_t* buffer,uint16_t bufLen)
{
  return emberAfReadAttributesResponseCallback(clusterId, buffer, bufLen);
}

// ReportAttributes function declarations.
bool emberAfReportAttributesCallback(EmberAfClusterId clusterId,uint8_t * buffer,uint16_t bufLen);

bool emAfReportAttributes(EmberAfClusterId clusterId,uint8_t * buffer,uint16_t bufLen)
{
  return emberAfReportAttributesCallback(clusterId, buffer, bufLen);
}
