#pragma once

#include <iostream>

class ATarget;

class ASpell {
	protected:
		std::string name;
		std::string effects;

	public:
		ASpell();

		ASpell(const ASpell &obj) {
			*this = obj;
		}

		ASpell& operator=(const ASpell &aspell) {
			this->name = aspell.name;
			this->effects = aspell.effects;
			return *this;
		}

		ASpell(std::string const &name, std::string const &effects) : name(name),  effects(effects) {}

		virtual ~ASpell(){};

		std::string const &getName() const {
			return this->name;
		};

		std::string const &getEffects() const {
			return this->effects;
		}

		virtual ASpell *clone() const = 0;

		void launch(ATarget const &_atarget) const;
};

#include "ATarget.hpp"
