class CfgVehicles {
    class Hatchback_01_base_F;
    class abe_scout: Hatchback_01_base_F {
        model 	= "\z\abe\addons\scout_vehicle\data\bcar.p3d";  /// simple path to model

        scope	= 2; 			/// makes the car visible in editor
        scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
        crew 	= "C_man_1"; 	/// we need someone to fit into the car
        side	= 3; 			/// civilian car should be on civilian side
        faction	= CIV_F;		/// and with civilian faction

        displayName = "Banana Scout Vehicle"; /// displayed in Editor
    };
};
