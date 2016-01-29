// Time-stamp: <2016-01-29 16:06:59 daniel>
// Author:  Daniel Mendyke [daniel@mendyke.com]

//
// application.cc: Routines of the sample::application class are defined here
//

// Required header files
//-----------------------------------------------------------------------------
#include <iostream>  // std::cerr
#include <cstdlib>  // EXIT_SUCCESS
#include "application.hh"  // sample::application
#include "stack.hh"  // bit9::stack
#include "fifo.hh"  // bit9::queue


// NS short hands
//-----------------------------------------------------------------------------
using namespace std;  // standard library
using namespace sample;  // Project NS


// Constructor
//-----------------------------------------------------------------------------
application::application() {
};  // end application constructor


// Destructor
//-----------------------------------------------------------------------------
application::~application() {
};  // end destructor


// Begin actual functionality of this application - called from 'main'
//-----------------------------------------------------------------------------
int application::run() {

  test_stack();
  test_queue();

  cerr << endl << "Thank you!" << endl << endl;

  return EXIT_SUCCESS;

};  // end run


// Test the bit9::stack object
//-----------------------------------------------------------------------------
void application::test_stack() {

  bit9::stack stack;

  cerr << endl << "Test of the Stack object" << endl;

  stack.push( 3 );
  stack.push( 5 );
  stack.push( 7 );

  cerr << "pop " << stack.pop() << endl;
  cerr << "pop " << stack.pop() << endl;
  cerr << "pop " << stack.pop() << endl;

};  // end test_stack


// Test the bit9::queue object
//-----------------------------------------------------------------------------
void application::test_queue() {

  bit9::fifo fifo;

  cerr << endl << "Test of the Queue (fifo) object" << endl;

  fifo.queue( 8 );
  fifo.queue( 16 );
  fifo.queue( 24 );

  cerr << "removing from fifo " << fifo.dequeue() << endl;
  cerr << "removing from fifo " << fifo.dequeue() << endl;
  cerr << "removing from fifo " << fifo.dequeue() << endl;

};  // end test_queue
