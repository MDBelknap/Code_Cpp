#include <iostream>
#include <string>
#include "sailing_functions.hpp"
#include <stdlib.h>
/* Let's go for a sail. In this very simple simulator you
go sailing, adjusting the baot to the conditions to go fast or slow, while being sure to not capsize.
*/

using namespace std;

int main ()
{
	int pointOfSail;
	int heel = 0;
	double speed = 0;
	int windSpeed = 8;
	int windDir = 170;
	double speedFactor = 0;
	int sailTrim;
	double trimFactor;

  	std::cout <<
    "It's a beautiful on the Chesapeake Bay. Let's go for a sail!\nThe wind blowing at "
    << windSpeed << " knots out of the " << WindDircetion (windDir) <<
    " .\n\n";
//set the initial heading 
  	std::cout <<
    "What direction should head to first?\nRemember: North = 0, East = 90, South = 180, and West = 270.\n Enter a heading in degrees:  \n";

  	std::cin >> pointOfSail;
//runs so long as the boat is upright
	while (heel < 45)
    {
      //makes sure the boat is not heading into the wind
      if (POSail (windDir, pointOfSail) == "irons")
	{
	  std::cout <<
	    "We are sailing too close to the wind and are in irons! Enter a new heading.\n";
	  cin >> pointOfSail;
	}
      else if (POSail (windDir, pointOfSail) == "luffing")
	{
	std:cout <<
	    "You are close to the wind and the sails are luffing. Make an ajustment to you course. Enter a new heading: \n";
	  cin >> pointOfSail;
	}
      else
	{
	  std::cout << "Here we go!\n";
	  std::cout << "We are on a " << POSail (windDir, pointOfSail) << "\n\n";
//    std::cout << speedFactor;
	  std::cout <<
	    "How would you like trim the sails?\n1) most in 4) most out \n\n";
	  std::cin >> sailTrim;
	  std::string tack = POSail (windDir, pointOfSail);

	  if (!(sailTrim >= 1 && sailTrim <= 4))
	    {
	      std::cout << "Not a valid setting, try again: \n";
	      std::cin >> sailTrim;
	    }
		speed = trim_calc(sailTrim, windSpeed, tack);
		std::cout << "we are making " << speed << "knots.\n";

	}

      while (speed != 0)
	  {
	    int change;
	    std::cout << "We are sailing\n We are going: " << speed <<
	    " knots and are heeling: " << heel << " degrees.\n\n";
	   std::cout <<
	    "The wind is in the sails and the oat is moving along.\n Would you like to change your heading or trim your sails?\n 1) Trim the sails\n2) Change the heading\n3) Life is good, sail on\n\n";
	    std::cin >> change;
	    if (change == 1)
	    {
	      std::cout << "How would you like to trim the sails?\n1 is in, 4 is out\n";
	      std::cin >> sailTrim;
	    }
	  else if (change == 2)
	    {
	      std::cout << "What would like your new heading to be?\n";
	      std::cin >> pointOfSail;
	    }
	  else if (change == 3)
	    {
	      continue;
	    }

	  }
    }
}
