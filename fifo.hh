// Time-stamp: <2016-01-29 15:44:16 daniel>
#ifndef __FIFO_HH__
#define __FIFO_HH__



// Exercise NS
namespace bit9 {

  // Wrapper around value and pointers
  struct node;  // forward decl

  // Wrapper around a "classic" fifo
  //---------------------------------------------------------------------------
  class fifo {

  public:

    fifo();
    virtual ~fifo();

    void queue( const int );
    int dequeue( );

  protected:

  private:

    node* head;
    node* tail;

  };  // end class fifo

};  // end bit9

#endif  // __FIFO_HH__
