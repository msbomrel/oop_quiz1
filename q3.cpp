/*
 Program: Question 3 from quiz 1.
 Name  : Mohan Singh Bomrel
 Roll  : 0308
 Output: 10
*/

#include<iostream>

using namespace std;

void doubleref(int* p)
{
    (*p) = (*p) * 2;
}
int main()
{
    int a = 5;
    doubleref(&a);
    cout << a;
}
