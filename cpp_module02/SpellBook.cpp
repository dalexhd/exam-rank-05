#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell *spell) {
	if (spell)
		__db.insert(std::make_pair(spell->getName(), spell->clone()));
};

void SpellBook::forgetSpell(std::string const &name) {
	std::map<std::string, ASpell *>::iterator it = __db.find(name);
	if (it != __db.end()) {
		delete it->second;
	}
	__db.erase(name);
};
