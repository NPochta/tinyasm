#include "TXLib.h"
#include "Static.cpp"

template <typename T> class Stack_T
{
  private:              
     Array<int, 1000> ajax;
     int vs_counter;
     bool OK () {return (ajax.OK() && (vs_counter>0));}    
     #undef  $
     #define $ if (OK()){
  public:   
     Stack_T (UINT first_Value) : vs_counter (0) {} 
     T pop  ()             {$ return ajax [vs_counter--];               }}
     void push (int value) {$ vs_counter++;  ajax [vs_counter] = value;}}
     T top  ()             {$ return ajax [vs_counter];                 }}
     T look (int pos )     {$ return ajax [pos];                        }}
};



const int PUSH = 68;
const int POP  = 61;
const int TOP  = 41;
const int LOOK = 32;
const int MUL  = 11;
const int ADD  = 12;
const int DIV  = 13;
const int SUB  = 14;
const int INF  = 99;
const int SNF  = 90;
const int PXL  = 15;
const int SQR  = 19;
const int GPS  = 22;



