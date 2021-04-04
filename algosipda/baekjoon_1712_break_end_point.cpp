// 백준 1712번
// 손익분기점(BREAK-END POINT) 구하기
/*
https://www.acmicpc.net/problem/1712
*/
/*
변수 목록
fixed cost (FC)
variable cost(expenses) (VC)
sales cost
*/

#include<iostream>
using namespace std;

int main() 
{
    // 변수 선언
    double fixedCost; // fixed cost (FC)
    double variableCost; // variable cost(expenses) (VC)
    double salesCost; // sales cost
    int numOfSales = 1; // number of sales

    // 변수 입력 받기
    cin >> fixedCost >> variableCost >> salesCost;

    // numOfSales > fixedCost / (salesCost - variableCost)
    numOfSales = (int)(fixedCost / (salesCost - variableCost)) + 1;
    if (numOfSales < 0)
        numOfSales = -1;

    cout << numOfSales << endl;

    return 0;

}