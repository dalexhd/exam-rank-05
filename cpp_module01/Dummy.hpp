#pragma once

#include <iostream>

#include "ATarget.hpp"

class Dummy: public ATarget {
	private:

	public:

		Dummy(): ATarget("Target Practice Dummy") {}

		~Dummy() {}

		ATarget *clone() const {
			return (new Dummy());
		}
};


