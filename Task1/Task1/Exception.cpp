#include "Exception.h"

ForbiddenLength::ForbiddenLength(std::string& message) : std::length_error(message){}