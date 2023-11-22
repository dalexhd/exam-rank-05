#pragma once

#include <iostream>

class ASpell;

class ATarget {
	protected:
		std::string type;

	public:
		ATarget();

		ATarget(const ATarget &obj) {
			*this = obj;
		}

		ATarget& operator=(const ATarget &target) {
			this->type = target.type;
			return *this;
		}

		ATarget(std::string const &type): type(type) {}

		virtual ~ATarget(){};

		std::string const &getType() const {
			return this->type;
		};

		virtual ATarget *clone() const = 0;

		void getHitBySpell(ASpell const &_aspell) const;
};

#include "ASpell.hpp"
