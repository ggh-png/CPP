// 생성자 : 객체가 생성될때 자동으로 호출되는 함수
// 소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수


#include <iostream>

using namespace std;

class myclass{

 public:
    myclass(){// 생성자

        cout << "생성자가 호출 되었다.!" << endl;
    }
    ~myclass() {// 소멸자
        cout << "소멸자가 호출 되었다.!" << endl;
    }
};

// myclass globalOJ;

void testlocalOJ(){
    cout << "testlocalOJ function start !!" << endl;
    myclass localOJ;
    cout << "testlocalOJ function end !!" << endl;
}
int main(){
    cout << "main start!!" << endl;
    myclass testlocalOJ();
    cout << "main end!!" << endl;    
}
    



// //this pointer   ===========================================================================================

// #include <iostream>

// using namespace std;

// class myclass{
// public:
//     void PrintThis(){
//         cout << "나의 주소는 " << this << endl;
//     }
// };

// int main(){
//     myclass a, b;

//     cout << "a의 주소는 " << &a << endl;
//     cout << "b의 주소는 " << &b << endl;
//     a.PrintThis();
//     b.PrintThis();
// }



// //struct
// //class = 자료저장(변수) + 자료처리(함수)
// //클래스(타입) : 특정한 용도를 수행하기 위한 변수와 함수를 모아 둔 틀(자료형)
// // 객체(object) : 그 틀을 이용하여 찍어낸 개체(변수, 메모리 상의 공간)
// #include <iostream>
// // 
// using namespace std;

// //private, protected, public

// class TV{
// private:
//     bool power_on;
//     int channel;
//     int volume;


// public:
//     void on(){
//         power_on = true;
//         cout << "TV_on" << endl;
//     }

//     void off(){
//         power_on = false;
//         cout << "TV_off" << endl;
//     }

//     void setchannel(int cnl){
//         if(cnl >= 1 && cnl <= 999){
//             channel = cnl;
//             cout << "채널을 " << cnl << "으로 바꿨습니다." << endl;
//         }
//     }

//     void setvolume(int vol){
//         if(vol >- 0 && vol <= 100){
//             volume = vol;
//             cout << "볼륨을 " << vol << "으로 바꿨습니다." << endl;
//         }
//     }
// };

// int main(){
//     TV lg;
//     lg.off();
//     lg.setchannel(10);
//     lg.setvolume(50);
//     lg.setvolume(-90);    
// }




//namespace==========================================================================================
// #include<iostream>

// using namespace std;

// int n;

// void set(){
//     n = 10;
// }

// namespace ggh {
//     int n;
//     void set();
//     namespace bmk {
//         int n;
//         void set();
//     }
// }

// int main(){
//     ::set();
//     ggh::set();
//     ggh::bmk::set();

//     cout << ::n << endl;
//     cout << ggh::n << endl;
//     cout << ggh::bmk::n << endl;
// }

// namespace ggh {
//     void ggh::set(){
//         n = 20; 
//     }
// }

// void ggh::bmk::set(){
//     n = 30;
// }





// #include<iostream>

// using namespace std;

// int n; //전역 변수

// void set (){
//     ::n = 10; //명시적 전역 변수 
// }

// namespace ggh {
//     int n;
//     void set(){
//         ggh::n = 20;//명시적 
//     }
// }

// namespace bmk {
//     int n;
//     void set(){
//         bmk::n = 30;//명시적 
//     }
// }

// int main(){
//     ::set();
//     ggh::set();//명시적 
//     bmk::set();//명시적 

//     cout << ::n << endl;
//     cout << ggh::n << endl;
//     cout << bmk::n << endl;
// }


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