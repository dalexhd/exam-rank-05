#pragma once

#include <iostream>
#include <map>

#include "ATarget.hpp"

class TargetGenerator {
	private:
		std::map<std::string, ATarget*> __db;

	public:
		TargetGenerator() {
		}

		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const & name);
		ATarget* createTarget(std::string const &name);

		~TargetGenerator() {
		}
};

