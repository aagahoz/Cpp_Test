#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

  const int NUM_FIRMS = 9;
  const int NUM_WORKERS = 47;
  const int NUM_LEAD_WORKERS = 10;

  const string firms[NUM_FIRMS] = {"Firm A", "Firm B", "Firm C", "Firm D", "Firm E", "Firm F", "Firm G", "Firm H", "Firm J"};

  const string workers[NUM_WORKERS] = {"W-1", "W-2", "W-3", "W-4", "W-5", "W-6", "W-7", "W-8", "W-9", "W-10",
                                 "W-11", "W-12", "W-13", "W-14", "W-15", "W-16", "W-17", "W-18", "W-19", "W-20",
                                 "W-21", "W-22", "W-23", "W-24", "W-25", "W-26", "W-27", "W-28", "W-29", "W-30",
                                 "W-31", "W-32", "W-33", "W-34", "W-35", "W-36", "W-37", "W-38", "W-39", "W-40",
                                 "W-41", "W-42", "W-43", "W-44", "W-45", "W-46", "W-47"};

  string leadWorkers[NUM_WORKERS] = {"LW-1", "LW-2", "LW-3", "LW-4", "LW-5", "LW-6", "LW-7", "LW-8", "LW-9", "LW-10"};

  return 0;
}