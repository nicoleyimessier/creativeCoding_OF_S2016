//
//  Person.h
//  classes
//
//  Created by Nicole Messier on 2/3/16.
//
//
#include "ofMain.h"
#ifndef __classes__Person__
#define __classes__Person__

#include <iostream>

#endif /* defined(__classes__Person__) */

class Person{
public:
    
    //properties
    string name;
    int age;
    string personality;
    string gender;
    Boolean alive;
    
    //methods
    void eat();
    void hello();
    void sleep();
    void talk();
    void lie();
    void shower();
    void fart();
};
