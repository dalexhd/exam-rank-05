#include <iostream>

class Warlock {
	private:
		std::string name;
		std::string title;

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
