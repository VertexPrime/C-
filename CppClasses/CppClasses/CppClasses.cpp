// CppClasses.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include "CppClasses.h"

int main()
{
    std::chrono::seconds interval(1);

    Cat cat1;

    std::cout << "Name your cat: " << std::endl;
    std::cin >> name;
    cat1.setName(name);

    std::cout << "Your cat's name is " << cat1.getName() << std::endl;

    while (!cat1.getIsMiserable()) {
        std::cout << "Cat " << cat1.getName() << std::endl;

        std::cout << "Hunger: " << cat1.getHunger() << std::endl;
        std::cout << "Happiness: " << cat1.getHappiness() << std::endl;
        std::cout << "Love: " << cat1.getLove() << std::endl;

        if (cat1.getPoop() >= 50) {
            std::cout << "Cat Pooped" << std::endl;
            cat1.setPoop(0);
        }

        std::this_thread::sleep_for(interval);
        system("CLS");
        cat1.tick();
    }
}

void Cat::setName(std::string newName)
{
    name = newName;
}

void Cat::setPoop(int num)
{
    poop = num;
}

std::string Cat::getName()
{
    return name;
}

int Cat::getHunger()
{
    return hunger;
}

int Cat::getHappiness()
{
    return happiness;
}

int Cat::getPoop()
{
    return poop;
}

int Cat::getLove()
{
    return love;
}

bool Cat::getIsMiserable()
{
    return isMiserable;
}

void Cat::tick()
{
    hunger = hunger - 2;
    happiness = happiness - 1;
    love = love - 1;
    poop = poop + 1;
}
