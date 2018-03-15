### 정수

- 부호 없는 정수 : unsinged가 앞에 붙는다
- short : 2바이트
- int : 4 바이트
- long : 4바이트(32비트 윈도우, 리눅스, 64비트 윈도우), 8바이트(64비트 리눅스)

### 실수 

- 리ㅐㅁㅅ

### 문자
 
> 유니코드 : 전세계 모든 문자에 대응하는 체꼐

- char : 1바이트 
- wchar_t : 2바이트, UTF-16, UTF -32 로 대응되는 문자타입을 제공
- null 종료 문자열 : 문자 배열 끝에 문자열의 끝을 표기하기 위해 null을 기록하는 방식을 사용함
- 한글은 두 비트씩 가짐

```cpp
#include <iostream>
#define MULTIPLY(x,y) x*y

using namespace std;

int main() {
    char name[] = "으아아아아ㅏ아ㅏㅏㅏㅏㅏㅏㅏㅏㅏ";
    cout << "Hello!" << name << MULTIPLY(1, 3) << endl;

    return 0;
}
```

### 파생타입

- 배열 : 동일한 타입이 한 개 이상의 일렬로 모인 집합 타입
- 포인트 : 메모리 영역의 주소를 대응시키는 체계
- 클래스 : 하나 이상의 타입을 모아놓은 집합 타입
- typedef : 타입 정의 방법
