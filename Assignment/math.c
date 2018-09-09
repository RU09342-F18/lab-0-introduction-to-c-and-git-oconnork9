#include <studio.h>
#include <math.h>

int main(void)
{
    int math(int num1, int num2, char Operator);
    switch(Operator) {
      case '+' : return (num1+num2); //Addition
	break;
      case '-' : return (num1-num2); //Subtraction
	break;
      case '*' : return (num1*num2); //Multiplication
      	break;
      case '/' : return (num1/num2); //Division
      	break;
      case '%' : return (num1%num2); //Remainder
     	break;
      case '<' : return (num1<num2); //Shift Left
      	break;
      case '>' : return (num1>num2); //Shift Right
      	break;
      case '&' : return (num1&num2); //Bitwise AND
      	break;
      case '|' : return (num1|num2); //Bitwise OR
      	break;
      case '^' : return (num1^num2); //Bitwise XOR
      	break;
      case '~' : return (~num1);     //Inverse
    	
	return 0;
}
