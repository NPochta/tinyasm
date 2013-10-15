//
//      ......  Copied from:
//     .
//     .
//       ....   Syntax Sugar for you...
//           .
//           .
//     ......  (C) ssDevelopment 2013
//
//-----------------------------------
// THIS FILE IS COPY PASTED AND MODIFIED, SO IT DOES NOT INCLUDE ALL NEW FEATURES!!!!!!!!!!!!!!!!!!!!!!
// SEE REAL FILE TO KNOW SOMETHING
//-----------------------------------
int REGNOMEYWOPOCATS = 0;

template <class AbsType, int ArrayMaxSize>
class Array
{
      private:     
       AbsType zData [ArrayMaxSize];    
       int zSize;         
      public:
       bool OK () {if(zSize < 0) {return false;} else {return true;}}
       Array () {zSize = ArrayMaxSize;}
         
       AbsType&  operator [] (int num)
       {        
                if (num < zSize && num > 0) return zData [num];
       }
       bool Empty () {if(zSize != 0) {return false;} else {return true;}}
       
};
