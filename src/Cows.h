/*
 * Cows.h
 *
 *  Created on: Mar 21, 2018
 *      Author: jpetterson
 */

#ifndef COWS_H_
#define COWS_H_

#include <iostream>
using namespace std;

class Cows
    {
    private:
	static int herdStatic;
	static int herdRemoved;
	int size;
	string name;
	int herdNumber;

    public:

	Cows(int x, string n);
	~Cows(); //deconstructor

	void speak();
	int inFieldNow();
	void stillThere();

    };

#endif /* COWS_H_ */
