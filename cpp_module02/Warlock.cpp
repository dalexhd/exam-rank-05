#include "Warlock.hpp"
#include "ASpell.hpp"

void Warlock::learnSpell(ASpell  *spell) {
	if (spell)
		__book.learnSpell(spell);
};

void Warlock::launchSpell(std::string const &name, ATarget &atarget) {
	ASpell *spell = __book.createSpell(name);
	if (spell) {
		spell->launch(atarget);
	}
};

void Warlock::forgetSpell(std::string const &name) {
	__book.forgetSpell(name);
};
