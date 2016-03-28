/*
●●●▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ஜ۩۞۩ஜ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬●●●
(¯`’★♫♪•♥ CREATES EPIC HITMARKERS!!! ♥ •♫♪★’´¯)
●●●▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ஜ۩۞۩ஜ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬●●●
*/
#include "script_component.hpp"
(_this select 0) params ["", "_shooter"];

if (_shooter == ACE_player && {GVAR(lastHit) != diag_frameNo}) then {
    GVAR(layer) cutRsc ["ABE_Hitmarker", "PLAIN"];
    playSound (QGVAR(hit) + (str floor random 3));
    GVAR(lastHit) = diag_frameNo;
};
