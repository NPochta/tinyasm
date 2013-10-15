#include "stack.cpp"

void add (Stack_T<int>& stack)
{
     int first  = stack.pop ();
     int second = stack.pop ();
     stack.push (first + second);
}     
void sub (Stack_T<int>& stack)
{
     int first  = stack.pop ();
     int second = stack.pop ();
     stack.push (first - second);
}     
void mul (Stack_T<int>& stack)
{
     int first  = stack.pop ();
     int second = stack.pop ();
     stack.push (first * second);
}     
void div (Stack_T<int>& stack)
{
     int first  = stack.pop ();
     int second = stack.pop ();
     stack.push (first / second);
}     



int compiler (Stack_T<int>* stack, int vl0, int vl1)
{
    if (vl0 == PUSH) {stack->push (vl1);} else
    if (vl0 == POP)  {$y cout << "\n Pop: "  <<  stack->pop() << "\n"      ;$r} else
    if (vl0 == TOP)  {$y cout << "\n Top: "  <<  stack->top() << "\n"      ;$r} else
    if (vl0 == LOOK) {$y cout << "\n Look: " <<  stack->look(vl1) << "\n" ;$r}  else
    if (vl0 == MUL)  {mul (*stack);} else
    if (vl0 == DIV)  {div (*stack);} else
    if (vl0 == SUB)  {sub (*stack);} else
    if (vl0 == ADD)  {add (*stack);} else
    if (vl0 == INF)  {$g cout << (char)vl1;}else
    if (vl0 == SNF)  {$r cout << "\n";}
    if (vl0 == PXL)  {txSetFillColor (TX_RED); txCircle (stack->pop(), stack->pop(), 10);}
    
}
     
