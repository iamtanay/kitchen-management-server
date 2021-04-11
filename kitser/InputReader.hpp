#ifndef INPUT_READER_HPP
#define INPUT_READER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "spdlog/spdlog.h"

namespace kitser {

    /**
     * @brief Class for reading input file for simulation.
     *
     * @details
     *  This class will create a data structure for handling,
     *  and managing the input to the simulation.
     **/
    class InputReader {

        public:
            
	    InputReader(std::string inputFileName);

        private:

            std::string mInputFileName;
            
    };
}
#endif
