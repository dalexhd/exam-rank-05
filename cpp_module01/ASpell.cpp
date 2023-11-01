#include "ASpell.hpp"
#include "ATarget.hpp"

void ASpell::launch(ATarget const &_atarget) const {
	_atarget.getHitBySpell((*this));
};

std::string const & ASpell::getEffects() const {
	return this->_effects;
};
