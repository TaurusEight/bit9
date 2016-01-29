// Time-stamp: <2016-01-28 15:03:51 dmendyke>
// Author:  Daniel Mendyke [daniel@mendyke.com]


//
// main.cc:  Defines main routine of this sample application
//


// Required header files
//-----------------------------------------------------------------------------
#include <cstdlib>  // EXIT_SUCCESS
#include <iostream>  // std::cerr
#include <exception>  // std::exception
#include "application.hh"  // sample::application


// NS short hand
//-----------------------------------------------------------------------------
using namespace std;  // standard library
using namespace sample;  // Project NS


// Standard entry into the application
// argc - int:  Number of command line parameters
// argv - char*:  List of the command line parameters
//-----------------------------------------------------------------------------
int main( int /*argc*/, char* /*argv*/[] ) {

  int result = EXIT_SUCCESS;  // default is error free

  try {  // last chance error handling

    application app;
    result = app.run();

  } catch( exception& error ) {

    cerr << error.what() << endl;
    result = EXIT_FAILURE;

  };  // end try / catch

  return result;

};  // end main
