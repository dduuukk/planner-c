#include "error.h"

namespace customError {
    void printError(const std::string& message)
    {
        std::cerr << RED << "Error: " << message << RESET << std::endl << std::endl;
    }

    void printWarning(const std::string& message)
    {
        std::cerr << YELLOW << "Warning: " << message << RESET << std::endl << std::endl;
    }
} // namespace customError