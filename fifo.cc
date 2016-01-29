// Time-stamp: <2016-01-29 16:11:08 daniel>

//
// fifo.cc:  Source for bit9::fifo object
//


// required header files
//-----------------------------------------------------------------------------
#include <iostream>  // std::cerr
#include <stdexcept>  // std::runtime_error
#include "fifo.hh"  // bit9::fifo
#include "node.hh"  // bit9::node


// NS short hand
//-----------------------------------------------------------------------------
using namespace std;  // standard library
using namespace bit9;  // exercise NS


// Constructor
//-----------------------------------------------------------------------------
fifo::fifo() : head( nullptr ), tail( nullptr ) {
};  // end constructor


// Destructor
//-----------------------------------------------------------------------------
fifo::~fifo( ) {

  // FIFO should be empty at this point but if not a loop should be
  // added to clear the object

};  // end destructor



// Add a value to the fifo
// value: int
//-----------------------------------------------------------------------------
void fifo::queue( const int value ) {

  node* local = new node( value );

  if ( head == nullptr ) head = local;  // fifo was empty
  if ( tail != nullptr ) tail->pointer = local;
  tail = local;

  cerr << "adding " << value << " to the fifo" << endl;

};  // end queue



// Remove a value from the fifo
//-----------------------------------------------------------------------------
int fifo::dequeue( ) {

  int result = 0x0;
  node* local = head;

  if ( local == nullptr ) throw runtime_error( "FIFO is empty!" );
  result = local->value;
  head = local->pointer;

  delete local;

  return result;

};  // end dequeue
