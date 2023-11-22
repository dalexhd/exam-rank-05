#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget* target) {
	if (target) {
		__db.insert(std::pair<std::string, ATarget*>(target->getType(), target->clone()));
	}
};

void TargetGenerator::forgetTargetType(std::string const & type) {
	std::map<std::string, ATarget *>::iterator it = __db.find(type);
	if (it != __db.end())
	{
		delete it->second;
	}
	__db.erase(type);
};

ATarget* TargetGenerator::createTarget(const std::string &type) {
	std::map<std::string, ATarget *>::iterator it = __db.find(type);
	if (it != __db.end()) {
		return __db[type];
	}
	return NULL;
};
