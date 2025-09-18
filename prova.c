/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int v[6] ={0,0,0,-1,1,1};// {2,-4,7,0,-1,4};
int n = 6;
int arg= 5;
int F (int v[], int n) 
{ int s;
  if (n == 0) 
  {    
      return 0;  
  }  
  else 
  {   
      s = F ( v, n-1 );
      if ( v[n-1]>0 )
         s = s + v[n-1];
      return s;
  } 
}

int func ( int arg ){
   if ( arg == 0 ) return 0;
   else return ( arg % 2 + 10 * func(arg/2) );
}

int main(){
	
int res;
 res = func (arg);
printf("%d",res);
getch();
return 0;
}
