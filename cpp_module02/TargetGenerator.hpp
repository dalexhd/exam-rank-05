#pragma once

#include <iostream>
#include <map>

#include "ATarget.hpp"

class TargetGenerator {
	private:
		std::map<std::string, ATarget*> __db;

		TargetGenerator(const TargetGenerator &obj);
		TargetGenerator& operator=(const TargetGenerator &aspell);

	public:
		TargetGenerator() {}
		~TargetGenerator() {
			std::map<std::string, ATarget *>::iterator it = __db.begin();
			while (it != __db.end()) {
				delete it->second;
				it++;
			}
			__db.clear();
		}

		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const &type);
		ATarget* createTarget(std::string const &type);
};

