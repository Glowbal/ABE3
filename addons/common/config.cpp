#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ABE_main"};
        author[] = {"Glowbal"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class cfgFactionClasses {
    class ABE_uniforms {
        displayName = "16AA Uniforms (ABE)";
        priority = 3;
        side = 3;
    };
};

class CfgVehicleClasses {
    class ABE_uniforms {
        displayName = "Men";
    };
};

#include "CfgEventHandlers.hpp"
