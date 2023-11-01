#pragma once

#include <iostream>

#include "ASpell.hpp"


class Fwoosh: public ASpell {
	private:

	public:
		Fwoosh(std::string &name, std::string &effects): ASpell(name, effects) {}

		Fwoosh(): ASpell("Fwoosh", "fwooshed") {}

		ASpell *clone() const {
			return (new Fwoosh());
		}
};

