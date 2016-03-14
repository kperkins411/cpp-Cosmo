#include "Balloon.h"

Balloon::Balloon(sizeofScreenBuffer myScreenBufferSize,location myLoc,int iHowLongBeforeFall, SPEED spd, DIRECTION dir ):Moveable(myScreenBufferSize,myLoc,spd, dir)
{

}

Balloon::~Balloon(void)
{
}

//returns true if its time to delete this balloon
bool Balloon::draw(std::vector<std::string> &myScreenVector){			//pure virtual, abstract base class, MUST BE DEFINED BY DERIVED CLASSES	
	bool bDeleteMe = false;

	/*case COSMO_POPPED:
			"       ");
			"    |  ");
			"  \\   /");
			" - pop-");
			"  /   \\");
			"    |  ");
			"       ");
			bDeleteMe = true;
			break;

		
		"   *   ");
		" *   * ");
		"* * * *");
		"*BOOM *");
		"* * * *");
		" *   * ");
		"   *   ");
		
		

		
		"  ___  ");
		" //\\ \\ ");
		"| \\/  |");
		" \\   / ");
		"  \\ /  ");
		"   |   ");
		"   |   ");
		
	}*/

	return bDeleteMe;
}