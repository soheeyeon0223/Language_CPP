#include <iostream> //#: preprocessor directive(전처리기)

int main(void){ //void: 함수 입력값으로 아무 것도 들어가지 않는다는 뜻
  int x = 2; //숫자는 literal
  x = 5;
  int y = x + 3;

  std::cout << y << std::endl; //::를 쓰면 namespace 안에 있는 cout, endl에 접근 가능

  return 0;
}
