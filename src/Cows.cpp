/*
 * Cows.cpp
 *
 *  Created on: Mar 21, 2018
 *      Author: jpetterson
 */

#include "Cows.h"

int Cows::herdStatic = 0;
int Cows::herdRemoved = 0;

Cows::Cows(int x, string n) :
	size(x), name(n)
    {
    cout << "Herd enters field." << endl;
    herdNumber = ++herdStatic;
    }

Cows::~Cows()
    {
    cout << "Herd " << name << " left the field." << endl;
    herdRemoved++;
    stillThere();
    }

void Cows::speak()
    {

    cout << "We are herd number " << herdNumber << ". With " << size
	    << " cows. And lead by " << name << endl;
    }

int Cows::inFieldNow()
    {
    int left = herdStatic - herdRemoved;
    if (left < 0)
	{
	left = 0;
	}
    return left;
    }

void Cows::stillThere()
    {
    if (inFieldNow() < 2)
	{
	cout << "Currently there is " << inFieldNow() << " herd in the field!"
		<< endl;
	}
    else
	{

	cout << "Currently there are " << inFieldNow() << " herds in the field!"
		<< endl;
	}
    }
