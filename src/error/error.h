#ifndef ERROR_H
#define ERROR_H

#include <string>
#include <iostream>

namespace customError {
    // ANSI escape codes for colors
    const std::string RESET = "\033[0m";
    const std::string RED = "\033[31m";
    const std::string GREEN = "\033[32m";
    const std::string YELLOW = "\033[33m";
    const std::string BLUE = "\033[34m";
    const std::string MAGENTA = "\033[35m";
    const std::string CYAN = "\033[36m";
    const std::string WHITE = "\033[37m";

    void printError(const std::string& message);
    void printWarning(const std::string& message);
}

#endif // ERROR_H