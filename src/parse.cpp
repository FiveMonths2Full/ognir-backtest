#include "parse.h"

std::vector<Candle> parse (std::ifstream& in) {
  //will have class or struct for containing an array of data for now it will simply send one to whatever variable it decides to be stored as in int main (int argc, char *argv[])
  //takes in line by line in a loop:
  //skip first two lines of two headers
  //creates Candle variable that will be put into candle vector that will be returned
  //takes in all values up until first comma
  //saves value to Camdle.unix
  //ignores comma
  //takes in all values up until next comma
  //saves to Candle.timestamp
  //ignores comma
  //takes in all values up until forward slash
  //saves to Candle.firstpair("value",) somehow figure this part out a bit confused how this would work
  //takes in all values until next comma
  //saces to Candle.secondpair("value",) read line 15 same situation
  //ignores comma
  //takes in all values up until next comma
  //saves to Candle.open
  //repeats steps above but for Candle.high , Candle.low Candle.close until next comma
  //ignores comma
  //takes in all values unti next comma saves to Candle.firstpair repeats for Candle.secondpair
  //saves candle value to vector
  //repeats until no more lines are avaialable
  //return vector
}
  

  

