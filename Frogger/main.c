#include <stdio.h>
#include "toolbox.h"
#include "GOFactory.h"
#include "TextManager.h"
#include "CollisionManager.h"
#include "GOUpdates.h"
//#include "images/Text_Tiles.h"


int debug = 1;

	////////////////////////////////////////////
	///  ##     ##    ###    #### ##    ##   ///  
	///  ###   ###   ## ##    ##  ###   ##   ///  
	///  #### ####  ##   ##   ##  ####  ##   ///  
	///  ## ### ## ##     ##  ##  ## ## ##   ///  
	///  ##     ## #########  ##  ##  ####   ///  
	///  ##     ## ##     ##  ##  ##   ###   ///  
	///  ##     ## ##     ## #### ##    ##   /// 
	////////////////////////////////////////////
int main()
{
	waitVBlank();
 
	/////////////////////////////////////////////////////////////////////////////////////
	///  #### ##    ## #### ######## ####    ###    ##       ####  ######  ########   ///  
	///   ##  ###   ##  ##     ##     ##    ## ##   ##        ##  ##    ## ##         ///  
	///   ##  ####  ##  ##     ##     ##   ##   ##  ##        ##  ##       ##         ///  
	///   ##  ## ## ##  ##     ##     ##  ##     ## ##        ##   ######  ######     ///  
	///   ##  ##  ####  ##     ##     ##  ######### ##        ##        ## ##         ///  
	///   ##  ##   ###  ##     ##     ##  ##     ## ##        ##  ##    ## ##         ///  
	///  #### ##    ## ####    ##    #### ##     ## ######## ####  ######  ########   /// 
	/////////////////////////////////////////////////////////////////////////////////////
	//Backgrounds
	REG_DISPCNT = 0x0000 | (1<<6);//Needed to initialise stuff.
	BGManager_SetLayers(1,1,0,0);
	BGManager_Init();  


	//Game Objects
	GOFactory_ToggleSpritesIsActive(1);
	GOFactory_Init();


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  #### ##    ## #### ########     ######      ###    ##     ## ########     #######  ########        ## ########  ######  ########  ######    /// 
///   ##  ###   ##  ##     ##       ##    ##    ## ##   ###   ### ##          ##     ## ##     ##       ## ##       ##    ##    ##    ##    ##   /// 
///   ##  ####  ##  ##     ##       ##         ##   ##  #### #### ##          ##     ## ##     ##       ## ##       ##          ##    ##         /// 
///   ##  ## ## ##  ##     ##       ##   #### ##     ## ## ### ## ######      ##     ## ########        ## ######   ##          ##     ######    /// 
///   ##  ##  ####  ##     ##       ##    ##  ######### ##     ## ##          ##     ## ##     ## ##    ## ##       ##          ##          ##   /// 
///   ##  ##   ###  ##     ##       ##    ##  ##     ## ##     ## ##          ##     ## ##     ## ##    ## ##       ##    ##    ##    ##    ##   /// 
///  #### ##    ## ####    ##        ######   ##     ## ##     ## ########     #######  ########   ######  ########  ######     ##     ######    /// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	GameObject* player = GOFactory_New(ENUM_GOTYPE_FROGGER, 112, 144,ENUM_DIR_LEFT, 20);


	GameObject* raceCar1 = GOFactory_New(ENUM_GOTYPE_CAR_RACE, 100, 100, ENUM_DIR_RIGHT, 20);
	GameObject* turtle = GOFactory_New(ENUM_GOTYPE_TURTLE_SAFE, 100, 0+16, ENUM_DIR_RIGHT, 20);
	raceCar1->z_Depth = 1;
	
	///////////////////////////////////////////////////////////////////////////////
	///  #### ##    ## #### ########     ######   #######  ########  ##    ##   ///  
	///   ##  ###   ##  ##     ##       ##    ## ##     ## ##     ##  ##  ##    ///  
	///   ##  ####  ##  ##     ##       ##       ##     ## ##     ##   ####     ///  
	///   ##  ## ## ##  ##     ##       ##       ##     ## ########     ##      ///  
	///   ##  ##  ####  ##     ##       ##       ##     ## ##           ##      ///  
	///   ##  ##   ###  ##     ##       ##    ## ##     ## ##           ##      ///  
	///  #### ##    ## ####    ##        ######   #######  ##           ##      /// 
	///////////////////////////////////////////////////////////////////////////////
	BGManager_CopyVRAM();
	GOFactory_CopytoOAM();

	//////////////////////////////////////////////////////////////////////////////////////////
	///   ######      ###    ##     ## ########    ##        #######   #######  ########   ///  
	///  ##    ##    ## ##   ###   ### ##          ##       ##     ## ##     ## ##     ##  ///  
	///  ##         ##   ##  #### #### ##          ##       ##     ## ##     ## ##     ##  ///  
	///  ##   #### ##     ## ## ### ## ######      ##       ##     ## ##     ## ########   ///  
	///  ##    ##  ######### ##     ## ##          ##       ##     ## ##     ## ##         ///  
	///  ##    ##  ##     ## ##     ## ##          ##       ##     ## ##     ## ##         ///  
	///   ######   ##     ## ##     ## ########    ########  #######   #######  ##         /// 
	//////////////////////////////////////////////////////////////////////////////////////////
	while(1)
	{
		





		//Update keys
		PollKeys();

		//Update Game Objects
		GOFactory_Update();

		///////////////////////////////////////////////////////////////////////////
		///  ##     ##         ########  ##          ###    ##    ## ##    ##   ///  
		///  ##     ##         ##     ## ##         ## ##   ###   ## ##   ##    ///  
		///  ##     ##         ##     ## ##        ##   ##  ####  ## ##  ##     ///  
		///  ##     ## ####### ########  ##       ##     ## ## ## ## #####      ///  
		///   ##   ##          ##     ## ##       ######### ##  #### ##  ##     ///  
		///    ## ##           ##     ## ##       ##     ## ##   ### ##   ##    ///  
		///     ###            ########  ######## ##     ## ##    ## ##    ##   /// 
		///////////////////////////////////////////////////////////////////////////
		waitVBlank();
		GOFactory_CopytoOAM();
		waitVDraw();
	}

	return 0;
}
