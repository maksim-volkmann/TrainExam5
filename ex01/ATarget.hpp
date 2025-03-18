#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>

class ASpell;

class ATarget{
private:
	std::string type_;

public:
	ATarget();
	ATarget(const std::string& type_);
	ATarget(const ATarget&);
	ATarget& operator=(const ATarget&);
	virtual ~ATarget();
	const std::string& getType() const;

	virtual ATarget* clone() const = 0;

	void getHitBySpell(const ASpell& spell) const;
};

#endif
