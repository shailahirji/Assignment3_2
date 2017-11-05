//============================================================================
// Name        :BarberShop.h
// Author      :Shaila Hirji
// Version     :
// Copyright   : Your copyright notice
// Description : This header file contains implementations of 2 basic functions:
//              1. addCustomer(Customer)- helps the BarberShop maintain the turns of their clients
//                 in order of First come, first served
//              2. nextCustomer()- this function returns the next customer who is waiting in line to be served
//              Although the underlying structure for this app is a LinkedStack, the implementation of the 2 methods
//              force the LinkedStack to behave like a queue, FIFO
//
//============================================================================
#include <iostream>
#include "LinkedStack.h"
#include "Customer.h"

using namespace std;


class BarberShop {

    LinkedStack<Customer> s1;//helper stack
    LinkedStack<Customer> s2;//changes made to this, main stack

public:

    BarberShop();

    void addCustomer(Customer &);

    Customer nextCustomer();

    virtual ~BarberShop();


};

/*
 * Constructor initializes the 2 LinkedStacks
 */
BarberShop::BarberShop() {
    this->s1 = LinkedStack<Customer>();
    this->s2 = LinkedStack<Customer>();

}

/*
 * This function add's customer to the stack,making sure the first customer is always at the top
 */
void BarberShop::addCustomer(Customer &customer) {

    //s1 is ALWAYS empty at the start of every execution of this function

    //no customer exists
    if (s2.isEmpty()) {
        s2.push(customer);

    } else if (!s2.isEmpty()) {//customer already waiting in line

        // the loops below will enable us to maintain the First Customer gets served First order--like a queue


        while (!s2.isEmpty()) { //empty s2 and populated s1, while reversing customer order, First Customer will now be last
            Customer person = s2.pop();
            s1.push(person);

        }

        s1.push(customer);//add newest customer at top of s1

        //reload s2 with first customer being on top of stack,newest at the bottom, ensure s1 is always empty for next run

        while (!s1.isEmpty()) {
            Customer person = s1.pop();
            s2.push(person);
        }

    }

}

/*
 * This function returns the next customer waiting in line for their turn
 */
Customer BarberShop::nextCustomer() {

    return this->s2.pop();//return customer at the top of stack

}

BarberShop::~BarberShop() {

}



