/*
●●●▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ஜ۩۞۩ஜ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬●●●
(¯`’★♫♪•♥ SHOWS CLIPPY THE COOL BANANA ♥ •♫♪★’´¯)
●●●▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ஜ۩۞۩ஜ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬●●●
*/
#include "script_component.hpp"
params ["_txtMain", "_txtButtonLeft", "_txtButtonRight", ["_blockButtonRight", false]];

if (createDialog QGVAR(dialog)) then {
    disableSerialization;
    private _dialog = uiNamespace getVariable QGVAR(dialog_handle);

    ctrlSetText [4, _txtMain];
    ctrlSetText [5, _txtButtonLeft];
    ctrlSetText [6, _txtButtonRight];

    if (_blockButtonRight) then {
        (_dialog displayCtrl 6) ctrlAddEventHandler ["MouseEnter", {call FUNC(catchMouseEnter)}];
    } else {
        (_dialog displayCtrl 6) ctrlRemoveAllEventHandlers "MouseEnter";
    };

    (_dialog displayCtrl 3) ctrlSetTextColor [1, 1, 1, 0];
    (_dialog displayCtrl 3) ctrlSetText QUOTE(PATHTOF(UI\anim\1.paa));
    for "_ctrl" from 4 to 6 do {
        (_dialog displayCtrl _ctrl) ctrlSetTextColor [0, 0, 0, 0];
    };
    (_dialog displayCtrl 7) ctrlSetBackgroundColor [1, 0.99, 0.84, 0];

    [{
        params ["_startTime", "_pfhHandle"];
        private ["_frameTime", "_dialog", "_opacity", "_frame"];

        _frameTime = 1/24;
        _frame = (floor ((ACE_time - _startTime) / _frameTime) + 1) min 47;
        _opacity = (_frame min 20) * 0.05;

        disableSerialization;
        _dialog = uiNamespace getVariable QGVAR(dialog_handle);

        (_dialog displayCtrl 3) ctrlSetTextColor [1, 1, 1, _opacity];
        (_dialog displayCtrl 3) ctrlSetText (QUOTE(PATHTOF(UI\anim\)) + (str _frame) + ".paa");
        for "_ctrl" from 4 to 6 do {
            (_dialog displayCtrl _ctrl) ctrlSetTextColor [0, 0, 0, _opacity];
        };
        (_dialog displayCtrl 7) ctrlSetBackgroundColor [1, 0.99, 0.84, _opacity];

        if (_frame == 47) then {
            [_pfhHandle] call CBA_fnc_removePerFrameHandler;
        };
    }, 0, ACE_time] call CBA_fnc_addPerFrameHandler;
};
