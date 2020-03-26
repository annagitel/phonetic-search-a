//#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;
#include <string>
using namespace std;
/* for every pair of mixed letters there is a test case. every tast case have the same structure: 
		word - word with the first letter 
		sentance  - sentance with the word 
		
		3 tests 
		2 negative tests

		word - word with the second letter 
		sentance  - sentance with the word 

		3 tests 
		2 negative tests
*/

TEST_CASE("v <-> w") 
{
    string word = "over";
    string sentance  = "the week is over";

    CHECK(find(sentance, "ower") == string(word));
    CHECK(find(sentance, "oVer") == string(word));
	CHECK(find(sentance, "oWer") == string(word));
	CHECK_THROWS_AS(find(sentance, "oder"), std::exception);
	CHECK_THROWS_AS(find(sentance, "oDer"), std::exception);
	
	word = "watermelon";
    sentance  = "wotermelon is a summer fruit";
    
	CHECK(find(sentance, "votermelon") == string(word));
    CHECK(find(sentance, "Wotermelon") == string(word));
	CHECK(find(sentance, "Votermelon") == string(word));
	CHECK_THROWS_AS(find(sentance, "potermelon"), std::exception);
	CHECK_THROWS_AS(find(sentance, "wotermelom"), std::exception);
}

TEST_CASE("b <-> f") 
{
    string word = "kubernetes";
    string sentance  = "kubernetes is a platform";

    CHECK(find(sentance, "kufernetes") == string(word));
    CHECK(find(sentance, "kuBernetes") == string(word));
	CHECK(find(sentance, "kuFernetes") == string(word));
	CHECK_THROWS_AS(find(sentance, "kuberfetes"), std::exception);
	CHECK_THROWS_AS(find(sentance, "kuFenbetes"), std::exception);
	
	word = "overflow";
    sentance  = "there was a stuck overflow";
    
	CHECK(find(sentance, "overblow") == string(word));
    CHECK(find(sentance, "overFlow") == string(word));
	CHECK(find(sentance, "overBlow") == string(word));
	CHECK_THROWS_AS(find(sentance, "overglow"), std::exception);
	CHECK_THROWS_AS(find(sentance, "oderblow"), std::exception);
}

TEST_CASE("f <-> p") 
{
    string word = "overflow";
    string sentance  = "there was a stuck overflow";

    CHECK(find(sentance, "overplow") == string(word));
    CHECK(find(sentance, "overFlow") == string(word));
	CHECK(find(sentance, "overPlow") == string(word));
	CHECK_THROWS_AS(find(sentance, "overglow"), std::exception);
	CHECK_THROWS_AS(find(sentance, "overDlow"), std::exception);
	
	word = "airplane";
    sentance  = "look! its an airplane";
    
	CHECK(find(sentance, "airflane") == string(word));
    CHECK(find(sentance, "airPlane") == string(word));
	CHECK(find(sentance, "airFlain") == string(word));
	CHECK_THROWS_AS(find(sentance, "airdlein"), std::exception);
	CHECK_THROWS_AS(find(sentance, "airElin"), std::exception);
}

TEST_CASE("p <-> b") 
{
    string word = "apple";
    string sentance  = "I ate an apple";

    CHECK(find(sentance, "apble") == string(word));
    CHECK(find(sentance, "aBBLE") == string(word));
	CHECK(find(sentance, "apBle") == string(word));
	CHECK_THROWS_AS(find(sentance, "aplle"), std::exception);
	CHECK_THROWS_AS(find(sentance, "able"), std::exception);
	
	word = "barbie";
    sentance  = "please buy me a barbie doll";
    
	CHECK(find(sentance, "parbie") == string(word));
    CHECK(find(sentance, "parBie") == string(word));
	CHECK(find(sentance, "Parpie") == string(word));
	CHECK_THROWS_AS(find(sentance, "bargie"), std::exception);
	CHECK_THROWS_AS(find(sentance, "Gargie"), std::exception);
}

TEST_CASE("g <-> j") 
{
    string word = "game";
    string sentance  = "game over";

    CHECK(find(sentance, "jame") == string(word));
    CHECK(find(sentance, "Jame") == string(word));
	CHECK(find(sentance, "Game") == string(word));
	CHECK_THROWS_AS(find(sentance, "pame"), std::exception);
	CHECK_THROWS_AS(find(sentance, "Lame"), std::exception);
	
	word = "aleluja";
    sentance  = "lets all say aleluja";
    
	CHECK(find(sentance, "aleluga") == string(word));
    CHECK(find(sentance, "aleluJa") == string(word));
	CHECK(find(sentance, "aleluGa") == string(word));
	CHECK_THROWS_AS(find(sentance, "alelufa"), std::exception);
	CHECK_THROWS_AS(find(sentance, "aleluTa"), std::exception);
}

TEST_CASE("c <-> k") 
{
    string word = "cooking";
    string sentance  = "I hate cooking";

    CHECK(find(sentance, "kooking") == string(word));
    CHECK(find(sentance, "Kooking") == string(word));
	CHECK(find(sentance, "KooKing") == string(word));
	CHECK_THROWS_AS(find(sentance, "looking"), std::exception);
	CHECK_THROWS_AS(find(sentance, "Booking"), std::exception);
    
	CHECK(find(sentance, "coocing") == string(word));
    CHECK(find(sentance, "cooCing") == string(word));
	CHECK(find(sentance, "CooCikng") == string(word));
	CHECK_THROWS_AS(find(sentance, "kooGing"), std::exception);
	CHECK_THROWS_AS(find(sentance, "cooFing"), std::exception);
}

TEST_CASE("q <-> k") 
{
    string word = "week";
    string sentance  = "the week is over";

    CHECK(find(sentance, "weec") == string(word));
    CHECK(find(sentance, "weeK") == string(word));
	CHECK(find(sentance, "weeC") == string(word));
	CHECK_THROWS_AS(find(sentance, "weed"), std::exception);
	CHECK_THROWS_AS(find(sentance, "WEED"), std::exception);
	
	word = "queen";
    sentance  = "I am the queen";
    
	CHECK(find(sentance, "kueen") == string(word));
    CHECK(find(sentance, "Kueen") == string(word));
	CHECK(find(sentance, "Queen") == string(word));
	CHECK_THROWS_AS(find(sentance, "kuiin"), std::exception);
	CHECK_THROWS_AS(find(sentance, "quin"), std::exception);
}

TEST_CASE("c <-> q") 
{
    string word = "queen";
    string sentance  = "I am the queen";

    CHECK(find(sentance, "cueen") == string(word));
    CHECK(find(sentance, "Cueen") == string(word));
	CHECK(find(sentance, "Queen") == string(word));
	CHECK_THROWS_AS(find(sentance, "quein"), std::exception);
	CHECK_THROWS_AS(find(sentance, "blin"), std::exception);
	
	word = "cooking";
    sentance  = "I hate cooking";
    
	CHECK(find(sentance, "qooqing") == string(word));
    CHECK(find(sentance, "cooqing") == string(word));
	CHECK(find(sentance, "Qooking") == string(word));
	CHECK_THROWS_AS(find(sentance, "oder"), std::exception);
	CHECK_THROWS_AS(find(sentance, "oDer"), std::exception);
}

TEST_CASE("s <-> z") 
{
    string word = "over";
    string sentance  = "the week is over";

    CHECK(find(sentance, "ower") == string(word));
    CHECK(find(sentance, "oVer") == string(word));
	CHECK(find(sentance, "oWer") == string(word));
	CHECK_THROWS_AS(find(sentance, "oder"), std::exception);
	CHECK_THROWS_AS(find(sentance, "oDer"), std::exception);
	
	word = "watermelon";
    sentance  = "wotermelon is a summer fruit";
    
	CHECK(find(sentance, "ower") == string(word));
    CHECK(find(sentance, "oVer") == string(word));
	CHECK(find(sentance, "oWer") == string(word));
	CHECK_THROWS_AS(find(sentance, "oder"), std::exception);
	CHECK_THROWS_AS(find(sentance, "oDer"), std::exception);
}

TEST_CASE("d <-> t") 
{
    string word = "dont";
    string sentance  = "dont be stupid";

    CHECK(find(sentance, "tont") == string(word));
    CHECK(find(sentance, "dond") == string(word));
	CHECK(find(sentance, "tond") == string(word));
	CHECK_THROWS_AS(find(sentance, "pond"), std::exception);
	CHECK_THROWS_AS(find(sentance, "gond"), std::exception);
    
	CHECK(find(sentance, "tond") == string(word));
    CHECK(find(sentance, "DonT") == string(word));
	CHECK(find(sentance, "TonD") == string(word));
	CHECK_THROWS_AS(find(sentance, "Pond"), std::exception);
	CHECK_THROWS_AS(find(sentance, "donG"), std::exception);
}

TEST_CASE("o <-> u") 
{
    string word = "output";
    string sentance  = "lets output the file";

    CHECK(find(sentance, "outpot") == string(word));
    CHECK(find(sentance, "uutput") == string(word));
	CHECK(find(sentance, "uutpot") == string(word));
	CHECK_THROWS_AS(find(sentance, "ovutput"), std::exception);
	CHECK_THROWS_AS(find(sentance, "outpvt"), std::exception);
	
	CHECK(find(sentance, "ootput") == string(word));
    CHECK(find(sentance, "ootOpt") == string(word));
	CHECK(find(sentance, "OUTPUT") == string(word));
	CHECK_THROWS_AS(find(sentance, "outpJt"), std::exception);
	CHECK_THROWS_AS(find(sentance, "oVtput"), std::exception);
}

TEST_CASE("i <-> y") 
{
    string word = "nice";
    string sentance  = "my friend is nice";

    CHECK(find(sentance, "nyce") == string(word));
    CHECK(find(sentance, "nIce") == string(word));
	CHECK(find(sentance, "nYce") == string(word));
	CHECK_THROWS_AS(find(sentance, "nkce"), std::exception);
	CHECK_THROWS_AS(find(sentance, "nece"), std::exception);
	
	word = "try";
    sentance  = "lets try it";
    
	CHECK(find(sentance, "tri") == string(word));
    CHECK(find(sentance, "trY") == string(word));
	CHECK(find(sentance, "trI") == string(word));
	CHECK_THROWS_AS(find(sentance, "tre"), std::exception);
	CHECK_THROWS_AS(find(sentance, "trQ"), std::exception);
}


