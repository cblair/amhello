#include <config.h>
          #include <stdio.h>
          
extern int main_cpp(void);

          int
          main (void)
          {
		main_cpp();
            puts ("Hello World!");
            puts ("This is " PACKAGE_STRING ".");
            return 0;
          }
