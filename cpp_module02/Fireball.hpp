#pragma once

#include <iostream>

#include "ASpell.hpp"


class Fireball: public ASpell {
	private:

	public:
		Fireball(std::string &name, std::string &effects): ASpell(name, effects) {}

		Fireball(): ASpell("Fireball", "burnt to a crisp") {}

		ASpell *clone() const {
			return (new Fireball());
		}
};

