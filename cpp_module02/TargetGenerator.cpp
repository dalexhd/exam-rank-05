#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget* target) {
	if (target) {
		__db.insert(std::pair<std::string, ATarget*>(target->getType(), target));
	}
};

void TargetGenerator::forgetTargetType(std::string const & name) {
	__db.erase(name);
};

ATarget* TargetGenerator::createTarget(const std::string &name) {
	std::map<std::string, ATarget *>::iterator it = __db.find(name);
	if (it != __db.end()) {
		return __db[name];
	}
	return NULL;
};
