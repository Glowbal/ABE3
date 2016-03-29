#include "script_component.hpp"

["killedByFriendly", {
    ["You just got friendly fired! Make sure to look less hostile next time.", "Yes", "I agree"] call FUNC(showClippy);
}] call ace_common_fnc_addEventHandler;

["medical_onUnconscious", {
    params ["_unit", "_isUnconscious"];
    if ((_unit == ACE_player) && {_isUnconscious}) then {
        ["Looks like you just fell unconscious! Try to not get shot next time.", "Thank you", "Thanks"] call FUNC(showClippy);
    };
}] call ace_common_fnc_addEventHandler;

["actionPlaceInBodyBag", {
    ["Feels good not be him, huh?", "Yes", "No", true] call FUNC(showClippy);
}] call ace_common_fnc_addEventHandler;

["flashbangExplosion", {
    ["BANG!", "BANG!", "BANG!"] call FUNC(showClippy);
}] call ace_common_fnc_addEventHandler;

["interactMenuOpened", {
    if (0 == floor random 10) then {
        ["If you try to treat a person, but he moves too much, make sure to shoot him so he holds still.", "OK", "Close"] call FUNC(showClippy);
    };
}] call ace_common_fnc_addEventHandler;

["firedPlayer", {
    if (0 == floor random 100) then {
        ["There's an easter egg when you shoot a friendly unit ;)", "Try now", "Maybe later"] call FUNC(showClippy);
    };
}] call ace_common_fnc_addEventHandler;

// TODO: this should probably not or only run in the main menu
[{
    ["Hi I'm ABE, you personal banana assistant. Do you want me to help you in the future?", "Yes", "No", true] call FUNC(showClippy);
}, [], 5] call ace_common_fnc_waitAndExecute;
