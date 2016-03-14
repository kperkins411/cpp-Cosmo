#include "Person.h"


Person::Person(sizeofScreenBuffer myScreenBufferSize,location myLoc, SPEED spd, DIRECTION dir ):Moveable(myScreenBufferSize,myLoc, spd, dir),bLegChangePosition(false)
{

}


Person::~Person(void)
{
}

//always return false since person never deleted
bool Person::draw(std::vector<std::string> &myScreenVector){			//pure virtual, abstract base class, MUST BE DEFINED BY DERIVED CLASSES	
//
//	bLegChangePosition = !bLegChangePosition;
//	switch(dir){
//	case LEFT:



//
//		"   \\\\\\\\|//// ");
//		"    |~ ////  ");
//		"    |O  //   ");
//		"   <    |    ");
//		"    |_/ |    ");
//		"--o |__/    ");
//		"   \\__|      ");
//		"      |      ");
//		
//		"     /|      ");
//		"   \\/_|      ");
//
//
//		"      |      ");
//		"    \\||      ");
//
//
//" \\\\\\\\|////   ");
//"  \\\\\\\\ ~|    ");
//"   \\\\  O|    ");
//"    |    >   ");
//"    | \\_|    ");
//"     \\__| o--");
//"      |__/   ");
//"      |      ");
//
//"      |\\     ");
//"      |_\\/    ");
//
//
//
//"      |     ");
//"      ||/    ");
//		}
//
//
//" \\\\\\\\\\|///// ");
//"  \\\\|\\ /|//  ");
//"   \\|O O|/   ");
//"    | ^ |    ");
//" \\  | - |  / ");
//"  o |___| o  ");
//"   \\__|__/   ");
//"      |     ");
//"      |     ");
//"     _|_     ");
//
//
//" \\\\\\\\\\|///// ");
//"  \\\\|~ ~|//  ");
//"   \\|O O|/   ");
//"    | ^ |    ");
//"    | v |    ");
//"    |___|    ");
//"    __|__    ");
//"    \\ | /    ");
//"     0|0     ");
//"     _|_     ");
//
//	}

	return false;
}
