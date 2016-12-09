class CfgWeapons {
    class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        muzzles[] += {"ABE_Grenade_BananaMuzzle"};

        class ThrowMuzzle;
        class ABE_Grenade_BananaMuzzle: ThrowMuzzle {
            magazines[] = {QGVAR(bananaGrenade)};
        };
    };
};
