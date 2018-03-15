# inline 함수

> 함수가 직접 실행되는 것이 아닌, 그를 대체해서 하는 함수

```cpp

inline int multiply(int x){
    return x*x;
}

```


# 매크로함수

```cpp

#define MULTIPLY(x,y) x*y

```