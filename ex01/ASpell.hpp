#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>

class ASpell{
protected:
	std::string name_;
	std::string effects_;

public:
	ASpell();
	ASpell(const std::string& name, const std::string& effects);
	ASpell(const ASpell&);
	ASpell& operator=(const ASpell&);
	virtual ~ASpell();
	const std::string& getName() const;
	const std::string& getEffects() const;

	virtual ASpell* clone() const = 0;
};

#endif
