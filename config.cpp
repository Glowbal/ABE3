#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"bcar"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
