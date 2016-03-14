#include "ScoreKeeper.h"

const char COSMO_SCORE_PREFIX[]		= "COSMO =";
const int  LEN_COSMO_SCORE_PREFIX	= 7;
const char BALLOON_SCORE_PREFIX[]	= "BALLOONS ="; 
const int  LEN_BALLOON_SCORE_PREFIX	= 10;
const int  SPACES_FOR_SCORE			= 6;

ScoreKeeper::ScoreKeeper(void)
{
	resetScores();
}

ScoreKeeper::~ScoreKeeper(void)
{
}

bool ScoreKeeper::getDisplayString(std::string &scoreString){
	//TODO calculate the score that goes in the display string here

	return true;
}
