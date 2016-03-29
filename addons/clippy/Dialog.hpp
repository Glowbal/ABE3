#include "script_component.hpp"

class GVAR(dialog) {
    idd = -1;
	onLoad = QUOTE(uiNamespace setVariable [ARR_2(QUOTE(QGVAR(dialog_handle)),_this select 0)]);
	duration = 10e10;
	fadein = 0.5;
	fadeout = 0.5;
	movingEnable = false;
	enableSimulation = 1;
	enableDisplay = 0;
	controlsBackground[] = {
		clippyAnim,
        clippyTextBG,
        clippyText
	};
	controls[] = {
		btnOK,
        btnDismiss
	};

    class clippyAnim {
        idc = 3;
        type = 0;
        style = 2096;
		colorBackground[] = {0, 0, 0, 0};
		colorText[] = {1, 1, 1, 1};
		font = "RobotoCondensed";
		sizeEx = 0;
		text = QUOTE(PATHTOF(UI\anim\47.paa));
        w = 0.3 * 3/4;
        h = 0.3;
		x = safeZoneX + safeZoneW - 0.3 * 3/4;
        y = safeZoneY + safeZoneH - 0.3;
    };

    class clippyTextBG {
        idc = 7;
        type = 0;
        style = 0;
		colorBackground[] = {1, 0.99, 0.84, 1};
		colorText[] = {0, 0, 0, 0};
		font = "RobotoCondensed";
		sizeEx = 0;
		text = "";
		w = 0.5 * 3/4;
		h = 0.3;
		x = safeZoneX + safeZoneW - 0.7 * 3/4;
		y = safeZoneY + safeZoneH - 0.5;
    };

    class clippyText {
        idc = 4;
        type = 0;
        style = 528;
		colorBackground[] = {0, 0, 0, 0};
		colorText[] = {0, 0, 0, 1};
		font = "RobotoCondensed";
		sizeEx = 0.04;
		text = "Hi there! I'm Banany! Do you want me to help you in the future?";
		w = 0.45 * 3/4;
		h = 0.18;
		x = safeZoneX + safeZoneW - 0.675 * 3/4;
		y = safeZoneY + safeZoneH - 0.475;
        lineSpacing = 1;
        shadow = 0;
    };

    class btnOK {
        idc = 5;
        type = 1;
        style = 2;
		colorBackground[] = {0, 0, 0, 0};
		colorText[] = {0, 0, 0, 1};
		font = "RobotoCondensed";
		sizeEx = 0.04;
		text = "Yes";
		w = 0.15;
		h = 0.05;
		x = safeZoneX + safeZoneW - 0.675 * 3/4;
		y = safeZoneY + safeZoneH - 0.27;
        borderSize = 0;
        colorBackgroundActive[] = {0, 0, 0, 0};
        colorBackgroundDisabled[] = {0, 0, 0, 0};
        colorBorder[] = {0, 0, 0, 0};
        colorDisabled[] = {0, 0, 0, 0};
        colorFocused[] = {0, 0, 0, 0};
        colorShadow[] = {0, 0, 0, 0};
        default = 1;
        offsetPressedX = 0.001;
        offsetPressedY = 0.001;
        offsetX = 0;
        offsetY = 0;
        shadow = 0;
        soundEnter[] = {"", 0, 1};
        soundPush[] = {"", 0, 1};
        soundClick[] = {"", 0, 1};
        soundEscape[] = {"", 0, 1};
        onButtonClick = QUOTE(closeDialog 1);
    };

    class btnDismiss: btnOK {
        idc = 6;
        x = safeZoneX + safeZoneW - 0.675 * 3/4 + 0.45 * 3/4 - 0.15;
        text = "Absolutely";
    };

};
