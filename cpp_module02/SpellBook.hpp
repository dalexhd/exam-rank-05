#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"
class SpellBook {

	private:
		std::map<std::string, ASpell*> __db;

	public:
		SpellBook() {
		}

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const &name);
		ASpell* createSpell(std::string const &name) {
			std::map<std::string, ASpell *>::iterator it = __db.find(name);
			if (it != __db.end()) {
				return __db[name];
			}
			return NULL;
		}

		~SpellBook() {
		}
};

