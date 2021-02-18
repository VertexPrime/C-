#pragma once

class Cat
{
public:
	void setName(std::string newName);
	void setHunger();
	void setHappiness();
	void setPoop(int num);
	void setLove();

	std::string getName();
	int getHunger();
	int getHappiness();
	int getPoop();
	int getLove();
	bool getIsMiserable();

	void tick();
private:
	std::string name = "Thomas";
	int hunger = 100;
	int happiness = 100;
	int poop = 0;
	int love = 100;
	bool isMiserable = false;
};

std::string name;
