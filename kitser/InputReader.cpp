#include "InputReader.hpp"

namespace kitser {
	
	InputReader::InputReader(std::string inputFileName) {
		
		this->mInputFileName = inputFileName;
        	spdlog::info("Input File Name : " + this->mInputFileName);
	}

}
