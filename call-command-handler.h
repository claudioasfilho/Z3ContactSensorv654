// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef SILABS_EMBER_AF_COMMAND_PARSE_HEADER
#define SILABS_EMBER_AF_COMMAND_PARSE_HEADER


// This is a set of generated prototype for functions that parse the
// the incomming message, and call appropriate command handler.

// Cluster: Basic, server
EmberAfStatus emberAfBasicClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Identify, client
EmberAfStatus emberAfIdentifyClusterClientCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Identify, server
EmberAfStatus emberAfIdentifyClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Poll Control, server
EmberAfStatus emberAfPollControlClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: IAS Zone, server
EmberAfStatus emberAfIasZoneClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Configuration Cluster, server
EmberAfStatus emberAfOtaConfigurationClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: MFGLIB Cluster, server
EmberAfStatus emberAfMfglibClusterServerCommandParse(EmberAfClusterCommand *cmd);

#endif // SILABS_EMBER_AF_COMMAND_PARSE_HEADER
