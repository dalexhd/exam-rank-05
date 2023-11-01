#pragma once

#include <iostream>

class ATarget;

class ASpell {
	protected:
		std::string _name;
		std::string _effects;
	private:

	public:
		ASpell(std::string &name, std::string &effects): _name(name),  _effects(effects) {}

		ASpell(std::string const &name, std::string const &effects) : _name(name),  _effects(effects) {}

		virtual ~ASpell(){};

		std::string const &getName() const {
			return this->_name;
		};

		std::string const &getEffects() const;

		virtual ASpell *clone() const = 0;

		void launch(ATarget const &_atarget) const;
};

#include "ATarget.hpp"
