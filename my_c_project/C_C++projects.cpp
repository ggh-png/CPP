#include <iostream>

using namespace std;

int main(){
    
    int a(5);
    int &p = a;
    p = 10;
    cout << p << endl;
    cout << a << endl;
    


}












// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int arr[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

//     for (int n : arr){
//         cout << n;   
//     } 
// }



//범위기반 for문==================================================================================

// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int arr[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

//     for (int n : arr){
//         cout << n;   
//     } 
// }

//C++ 기본문법 ==================================================================================
// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int a(10); // int a = 10; C 언어 스톼일 
//     int b(a + 5);

//     cout << "a = "<< a << endl;
//     cout << "b = " << b << endl;
    
    

// }


//C++ 문자열 합치지================================================================================
// #include <iostream>
// #include <string>

// using namespace std;

// int main(){

//     string name;

//     cout <<"이름입력 : ";
//     cin >> name;

//     string message = "안녕하세요, " + name + "님";
//     cout << message << endl;
// //     string str; // 변수 형태로 문자열을 저장 할 수 있음
// //     str = "hello";
// //     cout << str << endl;
// }

//C++ 입출력=======================================================================================
// #include <iostream>


// // int main(){
// //     // std = 이름 성
// //     std::cout << "hello world!!" << std::endl;
// // }

// using namespace std;

// int main(){
//     // std = 이름 성

//     int a, b;
//     cin >> a >> b;
//     cout << "hello world!!" << endl;
//     cout << a << "+" << b << "=" << a + b << endl;
// }
//C++ 시작!!!=====================================================================================

// 조건에 따른 강제 종료 프로그램==================================================================
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int sum = 0;

//     for(int i = 0; i < 5; i++){
//         int n;
//         scanf("%d", &n);
//         if(n <= 0){
//             printf("에러에러에러");
//             exit(0);
//         }
//         sum += n;
//     }
//     printf("%d", sum);
// }

//난수 발생기-------------------------------------------------
// #include <stdlib.h>
// #include <stdio.h>
// #include <time.h>

// int main(){
//     srand(time(NULL));//현 시각을 뜻함
   
//     for(int i = 1; i <= 10; i++){
//         printf("%d\n", rand() % 10 + 1);// 1 ~ 10까지의 난수 발생
//     }
// }

//--------------------------------------------------------------------------------------------
// sscanf  /  sprintf
// #include <stdio.h>

// int main(){ 
//     char str[] = "450";
//     int n;

//     sscanf(str, "%d", &n);   
//     printf("n = %d\n", n);

// }


// #include <stdio.h>

// int main(){ 
//     int n = 450;
//     char str [100];

//     sprintf(str , "%d", n);
//     printf("%s\n", str);

// }


// getcher   /   putchar-----------------------------------------
// #include <stdio.h>

// int main(){
//     char ch;

//     ch = getchar();

//     putchar(ch);    
// }
// gets   /   puts ---------------------------------------------

// #include <stdio.h>

// int main(){
//     const char str[100];
//     gets_s(str);
//     puts(str);
// }
//feof()함수를 이용한 문서 열기================================================================================================
// #include <stdio.h>

// int main(){
//     FILE *in = fopen("C_C++projects.cpp", "r");
//     char ch;
//     while (fscanf(in, "%c", &ch) != EOF){ //파일의 끝에 도달했을 때 트루를 반환하는 함수
//         printf("%c", ch);
//     }
//     fclose(in);
// }

//파일의 입출력==============================================================================================================
//ver.2
// #include <stdio.h>

// int main(){
//     FILE *in, *out;// 파일을 가리키는 포인터 //스트림
//     int n;

//     in = fopen("input.txt", "r");
//     out = fopen("output.txt", "a"); //w 는 초기화 a는 이어쓰기 
    
//     if(in != nullptr){
//         fscanf(in, "%d", &n);
//         fprintf(out, "%d\n", n);
//         fclose(in);
//     }
// }


// #include <stdio.h>

// int main(){
//     FILE *in, *out;// 파일을 가리키는 포인터 //스트림
//     int n;

//     in = fopen("input.txt", "r");
//     out = fopen("output.txt", "a"); //w 는 초기화 a는 이어쓰기 
//     fscanf(in, "%d", &n);
//     fprintf(out, "%d\n", n);

//     fclose(in);
//     fclose(out);
// }

// 매크로 자세히 알아보기=========================================================================================
// #include <stdio.h>

// #define MAX(A, B) (((A) > (B)) ?  (A) : (B))

// #define FOR(I,S,E) for(int I = S; I <= E; I++)

// #define LOOP while (true)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 #include <stdio.h>

int max(int *arr, int *num){
    // if( a > b) return a;
    // return b;
    int prr = arr[0];
    for(int i = 1; i < *num; i++){

        return (arr[i+1] > arr[i] ? arr[i+1] : arr[i+2]);    
    }
}
int main(){
    int arr[100];
    int num;
    printf("구할 숫자의 개수를 입력하시오");
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    max(&arr[0], &num);
    printf("%d", max(num));
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//매크로 알아보기===================================================================
// #include <stdio.h> 

// #define SQUARE(X) ((X)*(X)) // 연산의 우선순위를 ()를 통해 정한다.


// int main(){
//     int a;
//     scanf("%d", &a);
//     printf("%d\n", SQUARE(a-1));
// }
// 상수 : 변하지 않는 수 
// 변수 : 변할 수 있는 수
// 상수를 만드는 것들 const, 매크로(#define), enum



// 구조체에 함수 넣기 ver.1-----------------------------------------------------------------------------------------
// #include <stdio.h>

// struct Point 
// {
//     int x, y;

//     void swap()
//     {
//         int tmp = x;
//         x = y;
//         y = tmp;
//     }
// };

// int main()
// {
//     Point pos {3,6};
//     pos.swap();
//     printf("(%d, %d)\n", pos.x, pos.y);
// }


//구조체에 함수넣기 ver.2==================================================================================
// #include <stdio.h>

// struct Point 
// {
//     int x, y;
// };
// void swap(Point *a)
// {
//     int tmp = (*a).x;
//     a -> x = a -> y;
//     a -> y = tmp;
// }

// int main(){
//     Point num = { 4, 7 };
//     swap(&num);
//     printf("(%d, %d)", num.x, num.y);
// }


// 구조체에 함수넣기 ver.1-1=================================================================================
// #include <stdio.h>

// struct Point
// {
//     int x, y;
//     void moveRight()
//     {
//         x++;
//     };
//     void moveLeft()
//     {
//         x--;
//     };
//     void moveUp()
//     {
//         y++;
//     };
//     void moveDown()
//     {
//         y--;
//     }; 
// };

// int main()
// {
//     Point p = { 2, 5 };
//     p.moveDown();
//     p.moveRight();
//     printf("( %d, %d )\n", p.x, p.y);
// }


// 구조체에 함수 넣기 ver.1=================================================================================
//  #include <stdio.h>

//  struct Time 
//  {
//      int h, m, s;
//  };
//  int totalSec(Time *t){
//      return 3600 * t->h + t->m * 60 + t->s;
//  }
//  int main(){
//     Time a = { 1, 22, 48 };

//     printf("%d\n ", totalSec(&a));
//      // 1시간 = 60분
//      // 1분  = 60초

//      // 1*3600 + 22*60 + 48

//  }
// 구조체에 함수넣기 ver.2=====================================================================================

//  #include <stdio.h>

//  struct Time 
//  {
//     int h, m, s;
//     int totalSec()
//     {
//         return 3600 * h + m * 60 + s;
//     }
//  };
 
//  int main(){
//     Time a = { 2, 22, 48 };

//     printf("%d\n ", a.totalSec());
//      // 1시간 = 60분
//      // 1분  = 60초

//      // 1*3600 + 22*60 + 48

//  }

// 구조체와 포인터를 이용한 tmp 함수를 쓴 상품 바꾸기===================================================================================
// #include <stdio.h>

// struct ProductInfo 
// {
//    int num; // 4B
//    char name[100];// 100B
//    int cost; // 4B
// };

// // void productSale(ProductInfo *p, int percent);

// void productSwap(ProductInfo *a, ProductInfo *b){
//     ProductInfo tmp = *a;
//     *a = *b;
//     *b = tmp;
// }
// int main()
// {
//     ProductInfo myProduct = { 4728, "푸히히", 20000 };
//     ProductInfo otherProduct = { 213728, "히히푸", 60000 };

//     productSwap(&myProduct, &otherProduct);

//     ProductInfo *ptr_product = &myProduct;
//     ProductInfo *ptr_product2 = &otherProduct;

//  //   productSale(&myProduct, 10);

//     printf("번호 : %d \n", ptr_product -> num);//연산 순서를 기억하자 
//     printf("이름 : %s \n", ptr_product -> name);//(*ptr_product).name
//     printf("가격 : %d \n", ptr_product -> cost);

//     printf("번호 : %d \n", ptr_product2 -> num);//연산 순서를 기억하자 
//     printf("이름 : %s \n", ptr_product2 -> name);//(*ptr_product).name
//     printf("가격 : %d \n", ptr_product2 -> cost);
// }

// void productSale(ProductInfo *p, int percent)
// {
//     p -> cost -= p -> cost * percent / 100;
// }


// 구조체 가리키기 call by value================================================
// #include <stdio.h>

// struct ProductInfo 
// {
//    int num; // 4B
//    char name[100];// 100B
//    int cost; // 4B
// };

// void productSale(ProductInfo *p, int percent);

// int main()
// {
//     ProductInfo myProduct = { 4728, "푸히히", 20000 };
//     ProductInfo *ptr_product = &myProduct;

//     productSale(&myProduct, 10);

//     // printf("번호 : %d \n", ptr_product -> num);//연산 순서를 기억하자 
//     // printf("이름 : %s \n", ptr_product -> name);//(*ptr_product).name
//     // printf("가격 : %d \n", ptr_product -> cost);

//     printf("번호 : %d \n", myProduct.num);//연산 순서를 기억하자 
//     printf("이름 : %s \n", myProduct.name);//(*ptr_product).name
//     printf("가격 : %d \n", myProduct.cost);        
// }

// void productSale(ProductInfo *p, int percent)
// {
//     p -> cost -= p -> cost * percent / 100;
// }


// 일반적인 구조체 포인터 사용법===================================================
// #include <stdio.h>

// struct ProductInfo 
// {
//    int num; // 4B
//    char name[100];// 100B
//    int cost; // 4B
// };

// int main()
// {
//     ProductInfo myProduct = { 4728, "푸히히", 19990 };

//     ProductInfo *ptr_product = &myProduct;

//     printf("번호 : %d \n", (*ptr_product).num);//연산 순서를 기억하자 
//     printf("이름 : %s \n", (*ptr_product).name);
//     printf("가격 : %d \n", (*ptr_product).cost);
// }

// 구조체와 메모리 ==============================================================
// #include <stdio.h>

// struct ProductInfo 
// {
//    int num; // 4B
//    char name[100];// 100B
//    int cost; // 4B
// };

// int main()
// {
//     ProductInfo myProduct = { 4728, "푸히히", 19990 };
    
//     printf("번호 : %d \n", &myProduct.num);
//     printf("이름 : %d \n", myProduct.name);
//     printf("가격 : %d \n", &myProduct.cost);
    
//     printf("myProduct의 크기는 : %d\n", sizeof(myProduct));

// }



// 구조체 이해하기------------------------------------------------------------------------------------------
// #include <stdio.h>

// int main(){
// 	typedef struct { int x, y; } Point;

// 	Point p;

// 	p.x = 3;
// 	p.y = 6;
// 	printf("%d, %d\n", p.x, p.y);
// }
// -------------------------------------------------------------------------------------------
// #include <stdio.h>
	
// typedef struct { int x, y; } Point;

// int main(){

// 	struct {int x, y;} p;
// 	p.x = 3;
// 	p.y = 6;
// 	printf("%d, %d\n", p.x, p.y);
// }



// #include <stdio.h>

// struct Point {int x, y; };

// int main(){


// 	Point p;

// 	p.x = 3;
// 	p.y = 6;
// 	printf("&d, \n", p.x, p.y);

// }



// ------------------------------------------------------------------------------------------------
// // type define
// #include <stdio.h>

// int main(){
// 	typedef const char *string; // const char *name = "dntjd"
// 	string name = "dntjd";
// 	printf("%s", name);
// }

// ==================================================================================================
// #include <stdio.h>

// int main(){
// 	typedef int pair[2];
// 	pair point = {3, 4};// int point[2] == {3, 4};
// 	printf("(%d, %d)", point[0], point[1]);	
// }

// const char을 이용한 문자형 배열 값 보내기---------------------------------------------------------
// #include <stdio.h>

// void print(const char *str){
// 	for(int i = 0; str[i] != '\0'; i++){
// 		if(str[i] != ' ')
// 		 printf("%c", str[i]);

// 	}

// }

// int main(){
// 	print("Hello, World!\n");
// 	print("H e l l o\n");
	
// }




// 포인터로 주소값을 받아 다이아몬드 출력하기--------------------------------------------------------------
// #include <stdio.h>


// int star(int* n){

// 	for(int i = 0; i < *n; i++){
// 		for(int j = 0; j < i; j++){
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// }



// int main () {
// 	int num;

// 	printf("다이아몬드의 크기를 입력하시오");
// 	scanf("&d", &num);
// 	star(&num);
// }

// arr 포인터 연산  연산자 순서=============================================================
// #include <stdio.h>

// int main(){
// 	char arr[6] = { "HELLO" };

// 	char* ptr;
// 	ptr = &arr[0]; 

// 	// 연산자 순서
// 	printf("%c", *(ptr + 3));
// }


// 포인터로 a, b값 바꾸기--------------------------------------------------------------
// #include <stdio.h>

// int swap (int* num1, int* num2){

// 	int temp;
// 	temp = *num2;
// 	*num2 = *num1;
// 	*num1 = temp; 
// 	printf("num1 = %d  num2 = %d ", *num1, *num2);
// }
// int main(){
// 	int a = 5;
// 	int b = 10;

// 	int* ptr;
// 	int* ptr2;

// 	//asterisk * 용도
// // 1. 포인터를 선언할 때 
// // 2. 해당 주소의 값에 접근할 떄 
// 	ptr = &a;
// 	ptr2 = &b;
// 	//& <-- ampersand  조소
// 	swap(&a, &b);

// }


//  포인터
// 종류 
// int 포인터
// float 포인터
// char 포인터



// 포인터로 배열 정보 넘기기 ---------------------------------------------------
// #include <stdio.h>

// void printArr(int *arr){
// 	for(int j = 0; j < 100; j++){
// 		printf("%d ", arr[j]);
// 	}	
// }
// int main(){
// 	int arr[100];
// 	int num; 
// 	printf("숫자를 입력하시오");
// 	scanf("%d", &num);
// 	for(int i = 0; i < num; i++){
// 		scanf("%d ", &arr[i]);
// 	}

// 	printArr(&arr[]);
// }




// 재귀함수를 이용한 펙토리얼----------------------------------------------
// #include <stdio.h>
// int fac(int n){
// 	if( n == 1) return 1;
// 	return n * fac(n - 1);
// }

// int main(){
// 	int num;
// 	printf("숫자를 입력하십시오");
// 	scanf("%d", &num);
// 	printf("%d\n", fac(num));
// }

// 프로토 타입--------------------------------------------------------
// #include <stdio.h>

// // 걷기 
// void work(int distance);
// void rotate(int angle);
// void square();

// int main(){
// 	square();
// }

// void work(int distance){
// 	printf("%d cm를 걸었다.\n", distance);
// }

// void rotate(int angle){
// 	printf("%d도 회전했습니다.\n", angle);
// }

// void square(){ 
// 	for(int i = 1; i <= 4; i++){
// 		work(10);
// 		rotate(90);
// 	}
// }

// call by value_----------------------------------------------------------
// #include <stdio.h>


// int swap(int *x, int *y){
// 	int tmp = *x;
// 	*x = *y;
// 	*y = tmp;

// }

// int	main(){
// 	int a, b;

// 	scanf("%d %d", &a, &b);
// 	swap(&a, &b);
// 	printf("a = %d b = %d ", a, b);
// }

// 포인터 문제 1--------------------------------------------------------------
// #include <stdio.h>

// int main (){
// 	int arr[3][4] = {{1, 2, 3 ,4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

// 	int (*ptr_arr)[4] = arr;

// 	for(int i = 0; i < 3; i++){
// 		for(int j = 0; j < 4; j++){
// 			printf("%d ", ptr_arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// }

// -------------------------------------------------------------------------
// #include <stdio.h>

// int main(){
// 	int arr[10][10];
// 	int a ,b;

// 	scanf("%d %d", &a, &b);

// 	for(int i = 0; i < a; i++){
// 		for(int j = 0; j < b; j++){
// 			scanf("%d ", &arr[i][j]);

// 		}
// 	 }
// 	for(int i = 0; i < a; i++){
// 		int sum = 0;
// 		for(int j = 0; j < b; j++){
// 			sum += arr[i][j];
// 		}
// 		printf("%d\n", sum);
// 	}
// }




// 배열을 이용한 짝수 홀 수 구하기------------------------------------------------
// #include <stdio.h>
 
//  int main(){
//  	int num;
//  	int arr[105];

//  	scanf("%d", &num);

//  	for(int i = 0; i < num; i++){
//  		scanf("%d", &arr[i]);
//  	}
//  	for(int i = 1; i < num; i += 2){
//  		printf("%d", arr[i]);
//  	}
//  	printf("\n");
//  	for(int i = 0; i < num; i+= 2){
//  		printf("%d", arr[i]);
//  	}
//  	printf("\n");
//  }
// ---------------------------------------------------------------------------------
// 배열 포인터 
// 	int(*ptr)[4] 4개짜리 주소값을 갖는 포인터 
// 포인터 배열 
// 	int*ptr[4] 4개짜리 포인터들의 배열 
// ---------------------------------------------------------------------------------

// #include <stdio.h>

// int main(){
// 	int arr[2][3] = { { 1, 2, 3 },
// 					   { 4, 5, 6} };
// 	for (int(*raw)[3] = arr; row < arr + 2; row++){
// 		for(int *col = *row; col < *row + 3; col++){
// 			printf("%d", *col);
// 		}
// 		printf("\n");
// 	}
// }

// 2차원 배열 포인터 예--------------------------------------------------------------
// #include <stdio.h>

// int main(){
// 	int arr[2][3] = { { 1, 2, 3 },
// 					   { 4, 5, 6} };

// 	int (*ptr)[3] = arr;

// 	for (int i = 0; i < 2; i++){
// 		for(int j = 0; j < 3; j++){
// 			printf("%d", ptr[i][j]);
// 		}
// 		printf("\n");
// 	}
// }

// 포인터 관련 설명 -------------------------------------------------------------------
// 1. 포인터 변수 선언시 *을 붙인다.
// 2. &가 붙은것들은 변수의 주소를 말한다.
// 3. 포인터 변수를 선언한 후 *을 붙이면 시작주소에서 포인터 변수의 형 크기만큼의 데이터를 불러온다.
// 4. 포인터 변수를 선언한 후 &을 붙이면 포인터 변수의 시작주소를 불러온다.

// arr == &arr[0]
// *arr == arr[0]
// arr + 1 == arr에 sizeof(*arr)를 더한 값

// ptr == &ptr[0]
// *ptr == ptr[0]
// ptr + 1 == ptr에 sizeof(*ptr)를 더한 값

// 포인터 배열 -------------------------------------------------------------------------------
// #include <stdio.h>

// int main(){
// 	int arr[3] = { 1, 2, 3 };

// 	int(*ptr_arr)[3];
// 	ptr_arr = &arr;

// 	for(int i = 0; i < 3; i++){
// 		printf("%d\n", (*ptr_arr)[i]);
// 	}
// }


// //문자열 개수 출력------------------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>

// int main(){
// 	char str[100];
// 	scanf("%s", str);
// 	int len = strlen(str);	
// 	printf("%d\n", len);
// }

// 파스칼 삼각형 -----------------------------------------------------------------------------
// #include <stdio.h>

// int main(){

// 	int p[10][10];
	
// 	for(int i = 0; i < 10; i++){
// 		for(int j= 0; j <= i; j++){
// 			if(j == 0 || j == i){
// 				p[i][j] = 1;
// 			}
// 			else {
// 				p[i][j] = p[i - 1][j - 1] + p[i -1][j];
// 			}
// 			printf("%d ", p[i][j]);
// 		}
// 		printf("\n");
// 	}
// }




// 최대값 구하기---------------------------------------------------------------

// #include <stdio.h>
 
//  int main(){
//  	int n;
//  	int arr[100];

//  	scanf("%d", &n);
//  	for(int i = 0; i < n; i++){
//  		scanf("%d", &arr[i]);
//  	}
//  	int max = arr[0];
//  	for(int i= 1; i < n; i++){
//  		if(max < arr[i]){
//  			max = arr[i];
//  		}
//  	}
//  }
// -------------------------------------------------------------------------------

// 별 만들기 -----------------------------------------------------------------
// #include <stdio.h>

// int main(){
// 	int num;
// 	printf(" 별의 크기를 입력해라\n");
// 	scanf("%d", &num);	
 
//     for(int i = 1; i <= num; i++){
//         for(int j = 1; j  <= i*2 -1; j++){
//             printf("%d", 2*j-1);
//             }      
//         printf("\n");
//         }
//     return 0;
// }

// 스위치 문-------------------------------------------------------------------------------
// #include <stdio.h>

// int main(){
//     int choice;
//     replay:
//     scanf ("%d", &choice); 
//     switch (choice){

//         case 1:
//             printf("1번의 경우");
//             break;
//         case 2:
//             printf("2번의 경우");
//             break;
//         case 3:
//             printf("3번의 경우");
//             break;
//         default:
//             printf("잘못입력하셨습니다.");
//             goto replay;
//             break;
//         }
// }