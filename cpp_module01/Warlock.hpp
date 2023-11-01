#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
	private:
		std::string _name;
		std::string _title;
		std::map<std::string, ASpell *> __db;

	public:
        Warlock(std::string const &name, std::string const &title): _name(name), _title(title) {
			std::cout << this->getName() << ": This looks like another boring day." << std::endl;
		}


		~Warlock() {
			std::cout << this->getName() << ": My job here is done" << "!" << std::endl;
		}

		void learnSpell(ASpell  *spell);

		void forgetSpell(std::string const &name);

		void launchSpell(std::string const &name, ATarget & atarget);


		std::string &getName() {
			return this->_name;
		}


		std::string &getTitle() {
			return this->_title;
		}

		void introduce() {
			std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
		}
};
