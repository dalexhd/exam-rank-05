#include "Warlock.hpp"

void Warlock::learnSpell(ASpell *spell) {
if (spell)
	__db.insert(std::make_pair(spell->getName(), spell->clone()));
};

void Warlock::launchSpell(std::string const &name, ATarget const &atarget) {
	std::map<std::string, ASpell *>::iterator it = __db.find(name);
	if (it != __db.end()) {
		it->second->launch(atarget);
	}
};

void Warlock::forgetSpell(std::string const &name) {
	std::map<std::string, ASpell *>::iterator it = __db.find(name);
	if (it != __db.end()) {
		delete it->second;
	}
	__db.erase(name);
};
