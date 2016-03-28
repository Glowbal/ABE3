class RscTitles {
    class ABE_Hitmarker {
        idd = -1;
        movingEnable = 0;
        enableSimulation = 1;
        fadein = 0;
        fadeout = 0.1;
        duration = 0.1;

        controlsBackground[] = {CtrlHitmarker};
        controls[] = {};

        class CtrlHitmarker {
            idc = -1;
            type = 0;
            style = 2096;
            x = QUOTE(safeZoneX + safeZoneW / 2 - 0.04);
            y = QUOTE(safeZoneY + safeZoneH / 2 - 0.04);
            h = 0.08;
            w = 0.08;
            font = "RobotoCondensed";
            sizeEx = 0;
            colorBackground[] = {0, 0, 0, 0};
            colorText[] = {1, 1, 1, 1};
            text = QUOTE(PATHTOF(UI\hitmarker.paa));
        };
    };
};
