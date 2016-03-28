#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"abe_main"};
        VERSION_CONFIG;
    };
};

#include "CfgWrapperUI.hpp"
