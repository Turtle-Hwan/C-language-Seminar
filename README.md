# C-language-Seminar

동아리 '부트사차원' C언어 세미나

진행기간 : 2020년 2학기 중 

강연자 : [손태형 선배님](https://github.com/thsvkd)

참고자료 : 모두의 코드 - [씹어먹는 C 언어](https://modoocode.com/231)

[노션에다 공부 내용, 의문점을 추가로 조사해 정리했다.](https://www.notion.so/C-09eab6bd6eff4ca48fb4a58417c5e141#90368183a5d6441888e9805028fb8700)   

## 세미나 요약
> 1강 : C 언어 개요 및 작동 방식, 개발환경 구축(Visual Studio 2019)   
> 2강 : 자료형, 변수의 이해와 입출력 함수   
> 3강 : 연산자   
> 4강 : 제어문   
> 5강 : 제어문 심화    
> 6강 : 배열   
> 7강 : 포인터, 배열에서 포인터 활용   
> 8강 : 함수   
> 9강 : 문자열   
> 10강 : 구조체   
> 11강 : 변수의 생존, 데이터 세그먼트, void main     
> 12강 : 동적 메모리 할당   
> 13강 : 파일 입출력   
> 14강 : git, github 이용, VS2019와 연동, 링크드 리스트   
> 15강 : 매크로 함수, 인라인 함수, 링크드 리스트    

### 과제 설명
> [1강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/1%EA%B0%95%20%EA%B3%BC%EC%A0%9C.cpp) : printf()   
> [2강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/2%EA%B0%95%20%EA%B3%BC%EC%A0%9C.cpp) : 변수, scanf(), scanf_s()     
> [3강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/3%EA%B0%95%20%EA%B3%BC%EC%A0%9C.cpp) : 연산자, getchar()   
> [4강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/4%EA%B0%95%20%EA%B3%BC%EC%A0%9C.cpp) : 조건문과 반복문을 이용한 up-down 게임   
> [5강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/5%EA%B0%95%20%EA%B3%BC%EC%A0%9C.cpp) : 반복문 사용해 짝수, 홀수 판별 프로그램 만들기     
> [6강 과제1](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/6%EA%B0%95%20%EA%B3%BC%EC%A0%9C-1.cpp) : 배열 이용해 점수 판별 프로그램 만들기   
> [6강 과제2](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/6%EA%B0%95%20%EA%B3%BC%EC%A0%9C-2.cpp) : 2차원 배열 이용해 좌표 비교 프로그램 만들기   
> [7강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/7%EA%B0%95%20%EA%B3%BC%EC%A0%9C.cpp) : 실제 값과 포인터 값의 차이, 이중 포인터, 포인터 주소 값, 포인트 변수의 크기   
> [8강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/8%EA%B0%95%20%EA%B3%BC%EC%A0%9C.cpp) : 함수를 사용한 정렬 알고리즘 짜기   
> [9강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/9%EA%B0%95%20%EA%B3%BC%EC%A0%9C.cpp) : 문자열을 포인터로 다루기. 주어진 문자열을 원래 문자열 사이 원하는 위치에 삽입한 후 출력하는 프로그램 만들기. (memmove()와 strcat_s() 이용함.)    
> [10강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/10%EA%B0%95%20%EA%B3%BC%EC%A0%9C.cpp) : 구조체를 이용해서 서로 다른 체력, 공격력, 공격속도를 가진 두 캐릭터가 싸우는 것을 출력하는 프로그램 만들기.   
> [11강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/main.cpp) : 직접 헤더파일 만들고, 그 함수를 불러와서 사용하는 프로그램 만들기.   
> [12강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/12%EA%B0%95%20%EA%B3%BC%EC%A0%9C.cpp) : 입력 받은 문자열 두 개를 각각 동적 메모리 할당을 이용해 저장한 후, 두 문자열을 합쳐서 출력하는 프로그램 만들기. (malloc()과 realloc(), free! 메모리 할당 해제!)  
> [13강 과제](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/13%EA%B0%95%20%EA%B3%BC%EC%A0%9C.cpp) : a.txt 내용을 불러와 b.txt 내용의 한 가운데에 삽입한 후 이 내용을 출력하는 프로그램 만들기.   


배운 것 : C 언어 기초부터 심화까지. C언어 특유의 메모리 관리. 포인터 개념. 배열, 문자열을 포인터로 다루기. 구조체와 헤더, 코드 파일 분리. 파일 읽고 쓰기.

앞으로 해볼 것 : C++ 학습, window api를 이용해서 window 기반 프로그램 제작 (작업관리자 같은 사용량 관리 등), 바이너리 파일, 리버스 엔지니어링
