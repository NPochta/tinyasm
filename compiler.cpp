#include "interprior.cpp"

int main (int argc, const char* argv[])
{
    txCreateWindow (800, 800);
    char rt [100];
    
    FILE* pfile;
    
    if (argc < 2)
    {
      cout << "Select File to open: "; 
      cin >> rt;
      pfile = fopen (rt, "r");
    }
    else pfile = fopen (argv[1], "r");
        
    int first, last;
    Stack_T<int> stack (0);
    
    system ("PAUSE");
    txClearConsole();
    
    while (pfile)
    {
          fscanf (pfile, "%i %i", &first, &last);
          if (first == 0) break;
          compiler (&stack, first, last);
    }   
    
    return 0e21;
}  
    
