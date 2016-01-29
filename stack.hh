// Time-stamp: <2016-01-29 15:21:12 daniel>
#ifndef __STACK_HH__
#define __STACK_HH__



// Exercise NS
namespace bit9 {


  // Wrappr around the data element of this class
  struct node;  // forward decl


  // Wrapper around a "classic" stack
  //---------------------------------------------------------------------------
  class stack {

  public:

    stack();
    virtual ~stack();

    void push( const int );
    int pop();

  protected:

  private:

    node* spointer;

  };  // end class stack

};  // end bit9

#endif  // __STACK_HH__
