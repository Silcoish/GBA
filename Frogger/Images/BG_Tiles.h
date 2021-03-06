
const unsigned char BG_TILES[] = {

/////////////////////////////////////////////////////////////////////// 
// Brick_001.png : 0 ///////////////////////////////////////////////// 
// Tile 0,0
0x11, 0x11, 0x11, 0x11, 
0x61, 0x56, 0x55, 0x55, 
0x51, 0x55, 0x55, 0x55, 
0x51, 0x55, 0x55, 0x55, 
0x11, 0x11, 0x11, 0x11, 
0x56, 0x66, 0x51, 0x55, 
0x55, 0x55, 0x61, 0x55, 
0x55, 0x55, 0x51, 0x55, 

// Tile 1,0
0x11, 0x11, 0x11, 0x11, 
0x51, 0x55, 0x55, 0x65, 
0x51, 0x55, 0x55, 0x66, 
0x61, 0x55, 0x55, 0x56, 
0x11, 0x11, 0x11, 0x11, 
0x66, 0x56, 0x51, 0x55, 
0x66, 0x55, 0x51, 0x55, 
0x55, 0x55, 0x51, 0x55, 

// Tile 0,1
0x11, 0x11, 0x11, 0x11, 
0x51, 0x65, 0x55, 0x55, 
0x61, 0x56, 0x56, 0x65, 
0x51, 0x55, 0x55, 0x65, 
0x11, 0x11, 0x11, 0x11, 
0x55, 0x55, 0x51, 0x55, 
0x55, 0x56, 0x51, 0x55, 
0x66, 0x65, 0x51, 0x55, 

// Tile 1,1
0x11, 0x11, 0x11, 0x11, 
0x51, 0x55, 0x55, 0x55, 
0x51, 0x55, 0x55, 0x55, 
0x51, 0x65, 0x66, 0x55, 
0x11, 0x11, 0x11, 0x11, 
0x55, 0x55, 0x51, 0x55, 
0x56, 0x66, 0x51, 0x55, 
0x65, 0x66, 0x51, 0x65,

/////////////////////////////////////////////////////////////////////// 
// Road_001.png : 1 ///////////////////////////////////////////////// 
// Tile 0,0
0x22, 0x22, 0x22, 0x33, 
0x22, 0x22, 0x22, 0x22, 
0x23, 0x22, 0x22, 0x22, 
0x33, 0x22, 0x22, 0x22, 
0x22, 0x22, 0x22, 0x22, 
0x22, 0x22, 0x22, 0x22, 
0x22, 0x22, 0x22, 0x22, 
0x22, 0x22, 0x33, 0x22, 

// Tile 2,0
0x22, 0x22, 0x22, 0x23, 
0x23, 0x22, 0x22, 0x22, 
0x22, 0x32, 0x22, 0x22, 
0x22, 0x22, 0x33, 0x23, 
0x22, 0x22, 0x23, 0x32, 
0x22, 0x23, 0x33, 0x22, 
0x22, 0x33, 0x22, 0x22, 
0x22, 0x32, 0x22, 0x22, 

// Tile 0,1
0x22, 0x32, 0x33, 0x22, 
0x22, 0x32, 0x22, 0x22, 
0x23, 0x22, 0x22, 0x32, 
0x22, 0x32, 0x22, 0x32, 
0x22, 0x32, 0x33, 0x23, 
0x22, 0x22, 0x23, 0x22, 
0x22, 0x22, 0x22, 0x22, 
0x22, 0x22, 0x22, 0x32, 

// Tile 1,1
0x22, 0x22, 0x22, 0x22, 
0x22, 0x22, 0x22, 0x22, 
0x33, 0x22, 0x22, 0x22, 
0x33, 0x33, 0x33, 0x22, 
0x22, 0x22, 0x32, 0x22, 
0x22, 0x22, 0x22, 0x22, 
0x22, 0x22, 0x22, 0x23, 
0x22, 0x22, 0x22, 0x23,

/////////////////////////////////////////////////////////////////////// 
// Water_001.png : 2 ///////////////////////////////////////////////// 
// Tile 0,0
0xAC, 0xCC, 0xBB, 0xCC, 
0xBB, 0xBB, 0xCC, 0xBB, 
0xCC, 0xBC, 0xBB, 0xCB, 
0xCC, 0xCC, 0xCC, 0xCC, 
0xCC, 0xCC, 0xAC, 0xAA, 
0xAA, 0xAA, 0xCA, 0xCC, 
0xCB, 0xCC, 0xCC, 0xCC, 
0xCB, 0xCC, 0xCC, 0xCC, 

// Tile 1,0
0xAA, 0xCA, 0xCC, 0xCC, 
0xCC, 0xCA, 0xCC, 0xBB, 
0xCC, 0xAC, 0xAA, 0xCB, 
0xCC, 0xCC, 0xCC, 0xCC, 
0xAA, 0xCA, 0xCB, 0xCC, 
0xCC, 0xBC, 0xCC, 0xBB, 
0xBB, 0xCB, 0xCC, 0xAC, 
0xAB, 0xCC, 0xAC, 0xAA, 

// Tile 0,1
0xBC, 0xCB, 0xCC, 0xCC, 
0xCC, 0xBC, 0xCB, 0xBC, 
0xCC, 0xBB, 0xCC, 0xCC, 
0xAC, 0xAA, 0xAA, 0xCC, 
0xCC, 0xBC, 0xCC, 0xCC, 
0xCA, 0xBB, 0xBB, 0xBB, 
0xAA, 0xCC, 0xBB, 0xCC, 
0xCC, 0xCC, 0xBB, 0xAA, 

// Tile 1,1
0xCC, 0xBC, 0xCB, 0xCC, 
0xBB, 0xBB, 0xBB, 0xCA, 
0xCC, 0xBC, 0xCB, 0xCC, 
0xCC, 0xBC, 0xCB, 0xCC, 
0xCC, 0xAA, 0xAA, 0xCC, 
0xCC, 0xBB, 0xAB, 0xAA, 
0xBC, 0xAB, 0xCC, 0xCC, 
0xCA, 0xCC, 0xCC, 0xCC

};