#include "ASpell.hpp"
#include "ATarget.hpp"

void ATarget::getHitBySpell(ASpell const &_aspell) const {
	std::cout << this->getType() << " has been " << _aspell.getEffects() << "!" << std::endl;
};
