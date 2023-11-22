#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
	private:
		std::string name;
		std::string title;
		std::map<std::string, ASpell *> __db;
		SpellBook __book;

		Warlock();
		Warlock(const Warlock &obj);
		Warlock& operator=(const Warlock &warlock);

	public:
		Warlock(std::string const &name, std::string const &title): name(name), title(title) {
			std::cout << this->getName() << ": This looks like another boring day." << std::endl;
		}

		~Warlock() {
			std::cout << this->getName() << ": My job here is done!" << std::endl;
		}

		void learnSpell(ASpell *spell);

		void forgetSpell(std::string const &name);

		void launchSpell(std::string const &name, ATarget const &atarget);

		std::string const &getName() const {
			return this->name;
		}
		std::string const &getTitle() const {
			return this->title;
		}

		void setTitle(std::string const &title) {
			this->title = title;
		}

		void introduce() const {
			std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
		}
};
