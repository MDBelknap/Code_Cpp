#include <iostream>
#include <string>

std::string POSail (int windDir, int pointOfSail)
{ double speedFactor;
  int diff;
  std::string sailDir = "";
  if (pointOfSail >= windDir)
    {
      diff = pointOfSail - windDir;
      // std::cout << diff << "\n";
    }
  else if (pointOfSail < windDir)
    {
      diff = windDir - pointOfSail;
      //std::cout << diff << "\n";
    }
  if (diff < 40 || diff > 320)
    {
      sailDir = "irons";
      speedFactor = 0;
    }
  else if ((diff >= 40 && diff < 45) || (diff > 315 && diff <= 320))
    {
      sailDir = "luffing";
      speedFactor = 0;
    }
  else if ((diff >= 45 && diff < 60) || (diff > 300 && diff <= 315))
    {
      sailDir = "close hauled";
      speedFactor = .75;
    }
  else if ((diff >= 60 && diff < 120) || (diff > 240 && diff <= 300))
    {
      sailDir = "beam reach";
      speedFactor = .65;
    }
  else if ((diff >= 120 && diff < 165) || (diff > 195 && diff <= 240))
    {
      sailDir = "broad reach";
      speedFactor = .5;
    }
  else
    {
      sailDir = "run";
      speedFactor = .5;
    }
  return sailDir;
}
