#include <iostream>

class Warlock {
	private:
		std::string _name;
		std::string _title;

		Warlock();
		Warlock(const Warlock &);
		Warlock& operator= (const Warlock &);

	public:

		Warlock(std::string const &name, std::string const &title): _name(name), _title(title) {
			std::cout << this->getName() << ": This looks like another boring day." << std::endl;
		}

		~Warlock() {
			std::cout << this->getName() << ": My job here is done!" << std::endl;
		}

		std::string const &getName() const {
			return _name;
		}
		std::string const &getTitle() const {
			return _title;
		}

		void setTitle(std::string const &title) {
			this->_title = title;
		}

		void introduce() const {
			std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
		}
};
