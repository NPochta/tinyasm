#include "stack.cpp"


int main (const char& argv)
{
    char a [100];
    cout << "Select File to open: ";
    cin >> a;
    FILE* pfile = fopen (a, "r");
    FILE* wfile = fopen ("output.rc", "w");
    
    char vl0 [10] = "";
    int  rt = 0;
    
    while (true)
    {
          fscanf  (pfile, "%s %d", &vl0, &rt);
          if (strstr (vl0, "push"))fprintf (wfile, "%d %d ", PUSH, rt);
          if (strstr (vl0, "pop")) fprintf (wfile, "%d %d ",  POP, rt);
          if (strstr (vl0, "add")) fprintf (wfile, "%d %d ", ADD, rt);
          if (strstr (vl0, "mul")) fprintf (wfile, "%d %d ", MUL, rt);
          if (strstr (vl0, "sub")) fprintf (wfile, "%d %d ", SUB, rt);
          if (strstr (vl0, "div")) fprintf (wfile, "%d %d ", DIV, rt);
          if (strstr (vl0, "info")) fprintf (wfile, "%d %d ", INF, rt);
          if (strstr (vl0, "top")) fprintf (wfile, "%d %d ", TOP, rt);
          if (strstr (vl0, "look")) fprintf (wfile, "%d %d ", LOOK, rt);
          if (strstr (vl0, "pixel")) fprintf (wfile, "%d %d ", PXL, rt);
          if (strstr (vl0, "end")) break;
    }   
    fprintf (wfile, "0 0");
}  
