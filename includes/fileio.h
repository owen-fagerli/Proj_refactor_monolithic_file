#ifndef FILEIO_H_
#define FILEIO_H_
#include <vector>
#include "../includes/constants.h"
using namespace std;

namespace OF{

    int loadData(const std::string filename, vector<process> &myProcesses);

    int saveData(const std::string filename, vector<process> &myProcesses);
}

#endif