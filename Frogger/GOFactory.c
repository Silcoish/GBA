#include "GOFactory.h"

GOFactory g_GOFactory;




void GOFactory_Init()
{
	int i = 0;

	for (i = 0; i < 128; i++)
	{
	//set all index numbers to 200
		g_GOFactory.indexList[i] = 200;
	//Set all Sprite data to not display
		g_GOFactory.ghostOAM[i].y = 500;
	//Set all game objects z to 1000;
		g_GOFactory.GOList[i].alive = FALSE;
	//
	//Zero the goCount
	//
	}

}

GameObject* GOFactory_New(int enum_type, int posX, int posY, int enum_dir, float speed)
{
	int i = 0;
	//Find First Available GameObject Spot
	for (i = 0; i < 128; i++)
	{
		if (g_GOFactory.GOList[i].alive == FALSE)
		{
			GOFactory_Sort();
			//Spot is Available.
			g_GOFactory.indexList[g_GOFactory.goCount] = i;
			//Set as Active or Alive
			g_GOFactory.GOList[i].alive = TRUE;
			//Set Sprite
			g_GOFactory.GOList[i].sprite = &(g_GOFactory.ghostOAM[g_GOFactory.goCount]);
			//Set Index
			g_GOFactory.GOList[i].index = &(g_GOFactory.indexList[g_GOFactory.goCount]);
			//Set all default Properties
			g_GOFactory.GOList[i].sprite->y = posY;//Set Init Position
			g_GOFactory.GOList[i].sprite->enableRotation = 0;//Do not allow rotation
			g_GOFactory.GOList[i].sprite->dubScale = 0;//off
			g_GOFactory.GOList[i].sprite->alpha = 0;//?????????????????????????????????????
			g_GOFactory.GOList[i].sprite->mosaic = 0;//Off
			g_GOFactory.GOList[i].sprite->colourMode = 0;//16 colour
			g_GOFactory.GOList[i].sprite->x = posX;//Set Init Position
			g_GOFactory.GOList[i].sprite->priority = 1;//Allows 1 BG layer behind
			g_GOFactory.GOList[i].sprite->rotation = 0;//actual rotation
			g_GOFactory.GOList[i].sprite->vertFlip = 0;//IF enabelRotation = 1, Do not set this value

			//Set Flip to direction of type.
			if (enum_dir == ENUM_DIR_LEFT)
				g_GOFactory.GOList[i].sprite->horzFlip = 0;//IF enabelRotation = 1, Do not set this value
			else if (enum_dir == ENUM_DIR_RIGHT)
				g_GOFactory.GOList[i].sprite->horzFlip = 1;//IF enabelRotation = 1, Do not set this value
			


			if (enum_type == ENUM_GOTYPE_FROGGER)
			{
			g_GOFactory.GOList[i].sprite->shape = 0;//Square or Rect
			g_GOFactory.GOList[i].sprite->spcRotation = 0;//DEpending on prvious values this will change.
			g_GOFactory.GOList[i].sprite->size = 0;//0, 1, 2 ,3 ,4  0 = 8 pixels, 1 = 16 pixels, 2 = 32 pixels, 3 = 64 pixels depending on the sprite size
			g_GOFactory.GOList[i].sprite->tileIndex = 0;//first tile in tile array.
			g_GOFactory.GOList[i].sprite->pallet = 0;
			}

			else if (enum_type == 1)
			{
			g_GOFactory.GOList[i].sprite->shape = 0;//Square or Rect
			g_GOFactory.GOList[i].sprite->spcRotation = 0;//DEpending on prvious values this will change.
			g_GOFactory.GOList[i].sprite->size = 0;//0, 1, 2 ,3 ,4  0 = 8 pixels, 1 = 16 pixels, 2 = 32 pixels, 3 = 64 pixels depending on the sprite size
			g_GOFactory.GOList[i].sprite->tileIndex = 1;//first tile in tile array.
			g_GOFactory.GOList[i].sprite->pallet = 0;
			}
			else if (enum_type == 2)
			{
			g_GOFactory.GOList[i].sprite->shape = 0;//Square or Rect
			g_GOFactory.GOList[i].sprite->spcRotation = 0;//DEpending on prvious values this will change.
			g_GOFactory.GOList[i].sprite->size = 0;//0, 1, 2 ,3 ,4  0 = 8 pixels, 1 = 16 pixels, 2 = 32 pixels, 3 = 64 pixels depending on the sprite size
			g_GOFactory.GOList[i].sprite->tileIndex = 2;//first tile in tile array.
			g_GOFactory.GOList[i].sprite->pallet = 0;
			}
			else if (enum_type == 3)
			{
			g_GOFactory.GOList[i].sprite->shape = 0;//Square or Rect
			g_GOFactory.GOList[i].sprite->spcRotation = 0;//DEpending on prvious values this will change.
			g_GOFactory.GOList[i].sprite->size = 0;//0, 1, 2 ,3 ,4  0 = 8 pixels, 1 = 16 pixels, 2 = 32 pixels, 3 = 64 pixels depending on the sprite size
			g_GOFactory.GOList[i].sprite->tileIndex = 3;//first tile in tile array.
			g_GOFactory.GOList[i].sprite->pallet = 0;
			}
			else if (enum_type == 4)
			{
			g_GOFactory.GOList[i].sprite->shape = 0;//Square or Rect
			g_GOFactory.GOList[i].sprite->spcRotation = 0;//DEpending on prvious values this will change.
			g_GOFactory.GOList[i].sprite->size = 0;//0, 1, 2 ,3 ,4  0 = 8 pixels, 1 = 16 pixels, 2 = 32 pixels, 3 = 64 pixels depending on the sprite size
			g_GOFactory.GOList[i].sprite->tileIndex = 4;//first tile in tile array.
			g_GOFactory.GOList[i].sprite->pallet = 0;
			}




			g_GOFactory.goCount ++;
			GOFactory_Sort();
			return &g_GOFactory.GOList[i];
		}



	}

	
	//Run a sort 
	//SOMTHING WENT WRONG
	return &g_GOFactory.GOList[i];
}

void GOFactory_Delete(GameObject* gameobject)
{
	if (gameobject->alive == TRUE)
	{
		g_GOFactory.goCount -= 1;
		//set game object to not alive, set z value to be 1000,
		gameobject->alive = FALSE;
		gameobject->sprite = 0;
		//set index to be 200 
		*(gameobject->index) = 200;
		//Set sprite data to be not displayed 
		gameobject->sprite->y = 500;
		gameobject->sprite->tileIndex = 0;

		GOFactory_Sort();
	}
}

void GOFactory_CopytoOAM()
{
	GOFactory_Sort();
	memcpy ((char*)SPRITE_OAM, ((char*)&(g_GOFactory.ghostOAM[0])), (sizeof(SpriteData) * 128));
}

void GOFactory_Swap(int i, int j)
{
	//Swap items
	//Swap Pointers
	//Point to new Index and Spritedata
	g_GOFactory.GOList[g_GOFactory.indexList[i]].sprite = &g_GOFactory.ghostOAM[j];
	g_GOFactory.GOList[g_GOFactory.indexList[i]].index = &g_GOFactory.indexList[j];

	g_GOFactory.GOList[g_GOFactory.indexList[j]].sprite = &g_GOFactory.ghostOAM[i];
	g_GOFactory.GOList[g_GOFactory.indexList[j]].index = &g_GOFactory.indexList[i];
	//Swap Memory
	//Ghost OAM
	SpriteData temp = g_GOFactory.ghostOAM[i];
	g_GOFactory.ghostOAM[i] = g_GOFactory.ghostOAM[j];
	g_GOFactory.ghostOAM[j] = temp;
	//Index Data
	int tempInt = g_GOFactory.indexList[i];
	g_GOFactory.indexList[i] = g_GOFactory.indexList[j];
	g_GOFactory.indexList[j] = tempInt;
}

void GOFactory_Sort()
{
	int i = 0;

	int finished = FALSE;

	while (!finished)
	{
		finished = TRUE;

		for (i = 0; i < 127; i++)
		{
			if (g_GOFactory.indexList[i] == 200)
			{
				if (g_GOFactory.indexList[i + 1] != 200)
				{
					finished = FALSE;
					GOFactory_Swap(i, i+1);
				}
			}
			else if (g_GOFactory.indexList[i + 1] == 200)
			{
				//Do Nothing
			}
			else if (g_GOFactory.GOList[g_GOFactory.indexList[i]].z_Depth > g_GOFactory.GOList[g_GOFactory.indexList[i + 1]].z_Depth)
			{
				finished = FALSE;

				GOFactory_Swap(i, i+1);
			}
		}
	}
}

