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

- cout : 표준 출력 스트림
- << : 끼워넣기 연산자 

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

- cin : 표준 입력 스트림 객체
- \>> : 뽑아내기 연산자, 콘솔로부터 키보드를 입력받아 변수에 데이터를 넣을 수 있다.

```cpp
#include <iostream>

using namespace std;
int main() {
    char name[256];
    cin >> name;

    cout << "Hello!" << name <<endl;
    
    return 0;
}
```

<br>

---

# 전처리기 지시문

> 전처리기에 대한 문의 모임

- #include : 라이브러리를 가져오는 지시문
- #define : 매크로를 정의하는 지시문

```cpp
#include <iostream>
#define MULTIPLY(x,y) x*y

using namespace std;

int main() {
    char name[256];
    cin >> name;

    cout << "Hello!" << name << MULTIPLY(1,3) << endl;

    return 0;
}
```

- #ifdef ~ #else ~ #endif : 전처리기 조건부 컴파일링
