#pragma once
#include <stdexcept>
#include <string>

class ForbiddenLength : public std::length_error {
public:
	ForbiddenLength(std::string & message);
};
