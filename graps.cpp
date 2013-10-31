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



int compiler (int* commands, const int size, int x)
{
    Stack_T<int> stack (0);
    for (int n = 0; n < size; n+= 2)
    {
          int vl0 = stack [n], vl1 = stack [n+1];
  	  switch (vl0)
  	  {
  	       case PUSH: stack.push (vl1);
  	       case POP:  {$y cout << "Pop:" << stack.pop() << "\n";}
  	       case TOP:  {$y cout << "Top:" << stack.top() << "\n";}
  	       case MUL:  mul (stack);
  	       case DIV:  div (stack);
  	       case SUB:  sub (stack);
     	       case ADD:  add (stack);
     	       case PSX:  stack.push (x);
               case PIXL: {txSetFillColor (TX_RED); txCircle (x, stack.pop);}
   	 }
    }
}

const int WinSize = 800;     

int main (const char& argv)
{
    txCreateWindow (WinSize, WinSize);

    char rt [100];
    cout << "Select File to open: "; 
    cin >> rt;
    FILE* pfile = fopen (rt, "r");
    int commands [LIMITS];
    int counter;
        
    while (true)
    {
          fscanf (pfile, "%d %d", first, last);
          commands [counter++] = first;
          commands [counter++] = first;
          if (commands [counter] == END) break;
    }   
    
    for (int x = 0; x < WinSize; x++)
    {
        compiler (commands, counter, x - WinSize/2);
    }

}  
    
