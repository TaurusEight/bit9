// Time-stamp: <2016-01-29 15:59:11 daniel>
#ifndef __NODE_HH__
#define __NODE_HH__


// Exercise NS
//-----------------------------------------------------------------------------
namespace bit9 {

  // Wrapper to hold both data and pointer to an element on the queue or stack
  struct node {

    node( const int v, node* n = nullptr ) : value( v ), pointer( n ) {};

    int value;
    node* pointer;

  };  // end struct node


};  // end NS bit9


#endif  // __NODE_HH__
