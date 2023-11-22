#pragma once

#include <iostream>

#include "ASpell.hpp"


class Polymorph: public ASpell {
	private:

	public:
		Polymorph(): ASpell("Polymorph", "turned into a critter") {}
		~Polymorph() {}

		ASpell *clone() const {
			return (new Polymorph());
		}
};

