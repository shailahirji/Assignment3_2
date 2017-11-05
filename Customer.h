//============================================================================
// Name        :Customer.h
// Author      :Shaila Hirji
// Version     :
// Copyright   : Your copyright notice
// Description : This header file contains prototypes of basic functions for an object of type Customer
//============================================================================

#ifndef ASSIGNMENT3_CUSTOMER_H
#define ASSIGNMENT3_CUSTOMER_H

#include<string>

using namespace std;

class Customer {

private:
    string _fName;
    string _lName;


public:
    Customer(string fName = "", string lName = "");

    string getName();

    virtual ~Customer();

};

#endif //ASSIGNMENT3_CUSTOMER_H

