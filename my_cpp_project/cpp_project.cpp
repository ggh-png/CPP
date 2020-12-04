#include<iostream>

using namespace std;

int n; //전역 변수

void set (){
    ::n = 10;
}

namespace ggh {
    int n;
    void set(){
        ggh::n = 20;
    }
}

namespace bmk {
    int n;
    void set(){
        bmk::n = 30;
    }
}

int main(){
    ::set();
    ggh::set();
    bmk::set();

    cout << ::n << endl;
    cout << ggh::n << endl;
    cout << bmk::n << endl;
}


// #include<iostream>

// using namespace std;

// int main(){
//     int arr[2][3] = {{1,2,3}, {4,5,6}};

//     for (int (&ln)[3] : arr){
//         for (int &col : ln){
//             cout << col << ' ';
//         }
//         cout << endl;
//     }
// }


// C 느낌=======
// #include<iostream>

// using namespace std;

// int main(){
//     int arr[2][3] = {{1,2,3}, {4,5,6}};
    
//     for(int* n : arr){
//         for(int j = 0; j < 3; j++){
//         cout << n[j] << ' ';    
//         }
//         cout << endl;
//     }
// }


//7부 종합문제 1 - 1 

// #include <iostream>

// using namespace std;

// int main(){
//     string name;
//     int cnt;
//     cout << "이름입력 : ";
//     cin >> name;
//     cout << "점수입력 : ";
//     cin >> cnt;
//     cout << name << "님의 점수는 " << cnt << "점입니다." << endl;    
// }


//디폴트 연산자 c ++ 주요 문법들 ------------------------------------------------------------------
// #include <iostream>

// using namespace std;

// int inventory[64] = { 0 };
// int score = 0;

// //디폴트 연산자를 통한 코드 축소 초기값을 넣어주어 구축함
// void getItem(int itemId, int cnt = 1, int sc = 0){


//     inventory[itemId] += cnt;
//     score += sc;
// }


// int main(){
//     getItem(6, 5);
//     getItem(3,4);
//     getItem(3);
//     getItem(11, 4, 40000);

//     cout << score << endl;

//     for(int i = 0; i < 15; i++){
//         cout << inventory[i] << ' ';

//     }
//     cout << endl;  
// }



//함수의 오버로딩을 이용한 게임 아이템

// #include <iostream>

// using namespace std;

// int inventory[64] = { 0 };
// int score = 0;

// void getItem(int itemId){
//     inventory[itemId]++;

// }

// void getItem(int itemId, int cnt){

//     inventory[itemId] += cnt;
// }

// void getItem(int itemId, int cnt, int sc){

//     inventory[itemId] += cnt;
//     score += sc;
// }


// int main(){
//     getItem(6, 5);
//     getItem(3,4);
//     getItem(3);
//     getItem(11, 4, 40000);

//     cout << score << endl;

//     for(int i = 0; i < 64; i++){
//         cout << inventory[i] << ' ';

//     }
//     cout << endl;  
// }



// // C++ 함수의 오버로딩

// #include <iostream>

// using namespace std;

// void swap (int &a, int &b){
//     int tmp = a;
//     a = b;
//     b = tmp;
// }

// void swad (double &a, double &b){
//     double tmp = a;
//     a = b;
//     b = tmp;
// }

// void swap (int* (&a), int* (&b)){
//     int *tmp = a;
//     a = b;
//     b = tmp;
// }

// int main(){
//     int a = 20, b = 30;
//     double da = 2.222, db = 3.333;
//     int *pa = &a, *pb = &b;

//     swap(a, b);
//     swap(da, db);
//     swap(pa, pb);

//     std::cout << "a, b = " << a << " , " << b << std::endl;
//     std::cout << "da, db = "  << da << " , " << db << std::endl;
//     std::cout << "pa, pb = " << *pa << " , " << *pb << std::endl;
// }

// // 레퍼런스 변수를 이용한 스왑 c ver


// #include <iostream>

// using namespace std;

// void swap (int &a, int &b){
//     int tmp = a;
//     a = b;
//     b = tmp;
// }

// void swapd (double &a, double &b){
//     double tmp = a;
//     a = b;
//     b = tmp;
// }

// void swapp (int* (&a), int* (&b)){
//     int *tmp = a;
//     a = b;
//     b = tmp;
// }

// int main(){
//     int a = 20, b = 30;
//     double da = 2.222, db = 3.333;
//     int *pa = &a, *pb = &b;

//     swap(a, b);
//     swapd(da, db);
//     swapp(pa, pb);

//     std::cout << "a, b = " << a << " , " << b << std::endl;
//     std::cout << "da, db = "  << da << " , " << db << std::endl;
//     std::cout << "pa, pb = " << *pa << " , " << *pb << std::endl;
// }

//c++ swap
// #include <iostream>
// using namespace std;

// void swap(int &a, int &b){
//     int tmp = a;
//     a = b;
//     b = tmp;
// }

// int main(){
//     int a(5), b(7);
//     swap(a, b);

//     cout << a << " , " << b << endl;
// }



// // // 범위기반 for문 레퍼런스 기초

// #include <iostream>

// using namespace std;

// int main(){
//     int arr[10] = {3,1,4,1,5,9,2,6,5,3 };
    
//     for (int &n : arr){
//         cout << n << ' ';
//         n++;
//     }
//     cout << endl;
//     for(int n : arr) { 
//         cout << n << ' ';
//     }
//     cout << endl;
// }



//  간단한  c++형  입출력

// #include <iostream>

// using namespace std;

// int main () {

//     int a(10); // c++
//     // int a = 10; // c
//     int b(a + 5);
//     cout << b << endl;
    
// }



// 문자열 연산자 


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string name;
//     cout << "이름 입력 : ";
//     cin >> name;

//     string message = "안녕하세요, " + name + " 님 ."; 

//     cout << message << endl;
// }


// // namespace

// #include <iostream>
// using namespace std;

// int main(){

//     int a, b;
//     cin >> a >> b;  
//     cout << a << " + " << b << " = " << a + b << endl;
// }


// //   c++  start hello world 
// #include <iostream>


// int main(){
//     std::cout << "hello world!" << std::endl;
// 