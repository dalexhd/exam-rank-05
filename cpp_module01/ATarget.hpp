#pragma once

#include <iostream>

class ASpell;

class ATarget {
	protected:
		std::string _type;
	private:

	public:
		ATarget(std::string type): _type(type) {}

		~ATarget(){};

		std::string const &getType() const {
			return this->_type;
		};

		virtual ATarget *clone() const = 0;

		void getHitBySpell(ASpell const &_aspell) const;
};

#include "ASpell.hpp"
