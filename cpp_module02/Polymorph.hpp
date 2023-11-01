#pragma once

#include <iostream>

#include "ASpell.hpp"


class Polymorph: public ASpell {
	private:

	public:
		Polymorph(std::string &name, std::string &effects): ASpell(name, effects) {}

		Polymorph(): ASpell("Polymorph", "turned into a critter") {}

		ASpell *clone() const {
			return (new Polymorph());
		}
};

