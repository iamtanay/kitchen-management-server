#include <kitser/utility.hpp>
#include <kitser/InputReader.hpp>
#include "spdlog/sinks/basic_file_sink.h"

using namespace kitser;

int main() {

    try {
        auto logger = spdlog::basic_logger_mt("KitchenServer", "Logs/Simulation_"+dateTime()+".log");
        spdlog::set_default_logger(logger);
        spdlog::info("Logger Object Initialised");
        spdlog::info("Starting Simulation");
        
    	InputReader(std::string("input/sampleInput.csv"));

    } catch(const char* err) {
    
        std::cerr<<"Caught exception : " << err << std::endl;
    }

    return 0;
}
