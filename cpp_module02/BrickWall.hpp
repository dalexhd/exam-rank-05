#pragma once

#include <iostream>

#include "ATarget.hpp"

class BrickWall: public ATarget {
	public:
		BrickWall(): ATarget("Inconspicuous Red-brick Wall") {};

		virtual ~BrickWall() {}

		BrickWall *clone() const {
			return (new BrickWall(*this));
		}
};

