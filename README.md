# C-language-Seminar

기간 : 2020년 2학기     

[손태형 선배님](https://github.com/thsvkd)     

참고자료 :     
모두의 코드 - [씹어먹는 C 언어](https://modoocode.com/231)    
[코딩도장 - C 언어](https://dojang.io/course/view.php?id=2)


[노션에다 공부 내용, 의문점을 추가로 조사해 정리했다.](https://www.notion.so/C-09eab6bd6eff4ca48fb4a58417c5e141#90368183a5d6441888e9805028fb8700)   

## 공부한 내용 요약
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

### 공부한 것을 적용시켜 만든 각각의 practice 파일 소개
> [01 practice](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/01%20practice.c) : printf()   
> [02 practice](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/02%20practice.c) : 변수, scanf(), scanf_s()     
> [03 practice](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/03%20practice.c) : 연산자, getchar()   
> [04 practice](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/04%20%20practice%20(upDownGame).c) : 조건문과 반복문을 이용한 up-down 게임   
> [05 practice](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/05%20practice.c) : 반복문 사용해 짝수, 홀수 판별 프로그램 만들기     
> [06 practice 1](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/06%20%20practice%201.c) : 배열 이용해 점수 판별 프로그램 만들기   
> [06 practice 2](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/06%20practice%202.c) : 2차원 배열 이용해 좌표 비교 프로그램 만들기   
> [07 practice](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/07%20practice.c) : 실제 값과 포인터 값의 차이, 이중 포인터, 포인터 주소 값, 포인트 변수의 크기   
> [08 practice](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/08%20practice.c) : 함수를 사용한 정렬 알고리즘 짜기   
> [09 practice(change string)](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/09%20practice%20(change%20string).c) : 문자열을 포인터로 다루기. 주어진 문자열을 원래 문자열 사이 원하는 위치에 삽입한 후 출력하는 프로그램 만들기. (memmove()와 strcat_s() 이용함.)    
> [09 practice(compare string)](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/09%20practice%20(compare%20string).c) : 문자열을 포인터로 다루기. 주어진 문자열을 원래 문자열 사이 원하는 위치에 삽입한 후 출력하는 프로그램 만들기. (memmove()와 strcat_s() 이용함.)    
> [10 practice](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/10%20practice%20(one-on-one%20fight%20game).c) : 구조체를 이용해서 서로 다른 체력, 공격력, 공격속도를 가진 두 캐릭터가 싸우는 것을 출력하는 프로그램 만들기.   
> [11 practice](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/11%20practice.c) : 직접 헤더파일 만들고, 그 함수를 불러와서 사용하는 프로그램 만들기.   
> [12 practice](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/12%20practice.c) : 입력 받은 문자열 두 개를 각각 동적 메모리 할당을 이용해 저장한 후, 두 문자열을 합쳐서 출력하는 프로그램 만들기. (malloc()과 realloc(), free! 메모리 할당 해제!)  
> [13 practice](https://github.com/Turtle-Hwan/C-language-Seminar/blob/main/13%20practice.c) : a.txt 내용을 불러와 b.txt 내용의 한 가운데에 삽입한 후 이 내용을 출력하는 프로그램 만들기.   


배운 것   
C 언어 기초부터 심화까지. C언어 특유의 메모리 관리. 포인터 개념. 배열, 문자열을 포인터로 다루기. 구조체와 헤더, 코드 파일 분리. 파일 읽고 쓰기.

앞으로 해볼 것   
C++ 학습, windows api를 이용해서 win32 기반 프로그램 제작 (작업관리자 같은 사용량 관리 등), 바이너리 파일, 리버스 엔지니어링
