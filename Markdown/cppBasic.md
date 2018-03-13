# C++ 기본

- 소스 : .cpp 로 시작되며 실행할 코드를 뜻함
- 헤더 : .h로 시작하며 라이브러리 파일
- 토큰 : 의미 있는 단어의 집합
- 키워드 : 이미 정해진 예약어
- 식별자 : identifier 는 이름을 붙여 나눈 식별자
- 식 : 하나의 값으로 도출되는 토큰의 조합
- 문 : 어떤 동작이 수행되어야 함을 나타내는 토큰의 조합이다. 

<br>

---

# 표준 입출력 

- cout , << 

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```