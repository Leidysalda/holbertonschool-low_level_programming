#C - Bit manipulation#

Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a byte.

![Bit manipulation](https://www.dummies.com/wp-content/uploads/402174.image0.jpg)

´´´
int bitcount(unsigned char x) 
{ 
   int count;
   
   for ( count=0; x != 0; x>>=1);
   {
      if ( x & 01)
         count++;
   }

   return count;
}

´´´