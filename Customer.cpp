//============================================================================
// Name        :Customer.cpp
// Author      :Shaila Hirji
// Version     :
// Copyright   : Your copyright notice
// Description : This class contains the function implmentations for an object of type Customer
//============================================================================

#include "Customer.h"
#include <iostream>


using namespace std;

/*
 * 2 parameter constructor
 */
Customer::Customer(string fName, string lName) {
    _fName = fName;
    _lName = lName;
}

/*
 * Customer object destructor
 */
Customer::~Customer() {

}

/*
 * Function returns customer's whole name, first plus last
 * Return type is string
 */
string Customer::getName() {
    return _fName + " " + _lName;
}