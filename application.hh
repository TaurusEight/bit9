// Time-stamp: <2016-01-29 15:09:17 daniel>
#ifndef __APPLICATION_HH__
#define __APPLICATION_HH__
// Author:  Daniel Mendyke [daniel@mendyke.com]


//
// application.hh:  Definition of main class of this application
//


// Project NS
//-----------------------------------------------------------------------------
namespace sample {


  // Wrapper around the functionality of this application
  //---------------------------------------------------------------------------
  class application {

  public:

    application();
    virtual ~application();

    int run();

  protected:

    void test_stack();
    void test_queue();

  private:

  };  // end class application


};  // end NS sample

#endif  // __APPLICATION_HH__
