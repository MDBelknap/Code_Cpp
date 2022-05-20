#include <iostream>
#include <string>
#include "sailing_functions.cpp"

int main(){
    

}/* Let's go for a sail. In this very simple simulator you
go sailing, adjusting the baot to the conditions to go fast or slow, while being sure to not capsize.
*/
#include <iostream>
#include <stdlib.h>
int windSpeed = 8;
int windDir = 170;
double speedFactor = 0;
int sailTrim;
double trimFactor;


using namespace std;
//this funtion process the wind direction and point of sail and outputs a tack based on the angle between the two. Irons generates no speed or heel; close haled, the most speed and heel; beam reach and broad run, medium speed and heel.

// this function takes a compass degree and ouputs a direction 
string
WindDircetion (int windDir)
{
  string compDir = "";
  int dir = windDir % 360;
  if (dir < 22 || dir >= 337)
    {
      compDir = "North";
    }
  else if (dir >= 22 && dir < 67)
    {
      compDir = "North East";
    }
  else if (dir >= 67 && dir < 112)
    {
      compDir = "East";
    }
  else if (dir >= 112 && dir < 157)
    {

      compDir = "South East";
    }
  else if (dir >= 157 && dir < 202)
    {
      compDir = "South";
    }
  else if (dir >= 202 && dir < 247)
    {
      compDir = "South West";
    }
  else if (dir >= 247 && dir < 292)
    {
      compDir = "West";
    }
  else if (dir >= 292 && dir < 337)
    {
      compDir = "North West";
    }
  return compDir;
}


int main ()
{

  int pointOfSail;
  int heel = 0;
  int speed = 0;


  std::
    cout <<
    "It's a beautiful on the Chesapeake Bay. Let's go for a sail!\nThe wind blowing at "
    << windSpeed << " knots out of the " << WindDircetion (windDir) <<
    " .\n\n";
//set the initial heading 
  std::
    cout <<
    "What direction should head to first?\nRemember: North = 0, East = 90, South = 180, and West = 270.\n Enter a heading in degrees:  \n";

  std::cin >> pointOfSail;
//runs so long as the boat is upright
  while (heel < 45)
    {
      //makes sure the boat is not heading into the wind
      if (POSail (windDir, pointOfSail) == "irons")
	{
	  std::
	    cout <<
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
	  std::cout << "We are on a " << POSail (windDir,
						 pointOfSail) << "\n\n";
//    std::cout << speedFactor;
	  std::
	    cout <<
	    "How would you like trim the sails?\n1) most in 4) most out \n\n";
	  std::cin >> sailTrim;
	  if (!(sailTrim >= 1 && sailTrim <= 4))
	    {
	      std::cout << "Not a valid setting, try again: \n";
	      std::cin >> sailTrim;
	    }
	  if (POSail (windDir, pointOfSail) == "close hauled")
	    {
	      if (sailTrim == 1)
		{
		  speed = windSpeed * speedFactor * 1.1;
		  heel = windSpeed * 2;
		}
	      else if (sailTrim == 2)
		{
		  speed = windSpeed * speedFactor * .9;
		  heel = windSpeed * 1.75;
		}
	      else if (sailTrim == 3)
		{
		  speed = windSpeed * speedFactor * .7;
		  heel = windSpeed * 1.5;
		}
	      else if (sailTrim == 4)
		{
		  speed = windSpeed * speedFactor * .5;
		  heel = windSpeed * 1.25;
		}
	    }
	  if (POSail (windDir, pointOfSail) == "beam reach")
	    {
	      if (sailTrim == 1)
		{
		  speed = windSpeed * speedFactor * .8;
		  heel = windSpeed * 1.5;
		}
	      else if (sailTrim == 2)
		{
		  speed = windSpeed * speedFactor * 1;
		  heel = windSpeed * 1.5;
		}
	      else if (sailTrim == 3)
		{
		  speed = windSpeed * speedFactor * .8;
		  heel = windSpeed * 1.25;
		}
	      else if (sailTrim == 4)
		{
		  speed = windSpeed * speedFactor * .6;
		  heel = windSpeed * 1;
		}
	    }
	  if (POSail (windDir, pointOfSail) == "broad run")
	    {
	      if (sailTrim == 1)
		{
		  speed = windSpeed * speedFactor * .5;
		  heel = windSpeed * .5;
		}
	      else if (sailTrim == 2)
		{
		  speed = windSpeed * speedFactor * .7;
		  heel = windSpeed * .75;
		}
	      else if (sailTrim == 3)
		{
		  speed = windSpeed * speedFactor * .9;
		  heel = windSpeed * .75;
		}
	      else if (sailTrim == 4)
		{
		  speed = windSpeed * speedFactor * .7;
		  heel = windSpeed * 1;
		}
	    }
	  if (POSail (windDir, pointOfSail) == "run")
	    {
	      if (sailTrim == 1)
		{
		  speed = windSpeed * speedFactor * .4;
		  heel = windSpeed * .25;
		}
	      else if (sailTrim == 2)
		{
		  speed = windSpeed * speedFactor * .6;
		  heel = windSpeed * .5;
		}
	      else if (sailTrim == 3)
		{
		  speed = windSpeed * speedFactor * .8;
		  heel = windSpeed * 5;
		}
	      else if (sailTrim == 4)
		{
		  speed = windSpeed * speedFactor * 1;
		  heel = windSpeed * .75;
		}
	    }
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
