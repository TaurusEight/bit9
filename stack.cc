// Time-stamp: <2016-01-29 16:10:50 daniel>

//
// stack.cc:  Source file for BIT9 exercise 'stack' object
//

// Required header files
//-----------------------------------------------------------------------------
#include <iostream>  // std::cerr
#include <stdexcept>  // std::runtime_error
#include "stack.hh"  // bit9::stack
#include "node.hh"  // bit9::node


// NS short hand
//-----------------------------------------------------------------------------
using namespace std;  // standard library
using namespace bit9;  // exercise NS


// constructor
//-----------------------------------------------------------------------------
stack::stack() : spointer( nullptr ) {
};  // end constructor

// destructor
//-----------------------------------------------------------------------------
stack::~stack() {

  // spointer should be null but if not a loop could be added to
  // delete remaining elements in this stack

};  // end stack


// Add a value to the end of the stack
// value:  int
//-----------------------------------------------------------------------------
void stack::push( const int value ) {

  node* local = new node( value, spointer );

  spointer = local;

  cerr << "push " << value << endl;

};  // end push



// Remove the value from the end of the stack and return it.
// Check to insure we don't over run the stack - throw a runtime error if we do
//-----------------------------------------------------------------------------
int stack::pop( ) {

  node* local = spointer;

  if ( local == nullptr ) throw runtime_error( "Stack is empty!" );

  int result = local->value;
  spointer = local->pointer;
  delete local;

  return result;

};  // end pop
