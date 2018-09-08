#include <studio.h>
#include <math.h>

int main(void)
{
    int math(int num1, int num2, char Operator);
    switch(Operator) {
      case '+' : return (num1+num2);
      case '-' : return (num1-num2);
      case '*' : return (num1*num2);
      case '/' : return (num1/num2);
      case '%' : return (num1%num2);
      case '<' : return (num1<num2);
      case '>' : return (num1>num2);
      case '&' : return (num1&num2);
      case '|' : return (num1|num2);
      case '^' : return (num1^num2);
      case '~' : return (~num1);
    
	return 0;
}
