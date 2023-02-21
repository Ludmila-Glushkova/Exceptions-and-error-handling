#include "Exception.h"

Except::Except(std::string& message) : std::domain_error(message){}