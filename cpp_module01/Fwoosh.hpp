#pragma once

#include <iostream>
#include "ASpell.hpp"

class Fwoosh: public ASpell {
	public:
		Fwoosh(): ASpell("Fwoosh", "fwooshed") {}

		virtual ~Fwoosh() {}

		ASpell *clone() const {
			return (new Fwoosh());
		}
};
