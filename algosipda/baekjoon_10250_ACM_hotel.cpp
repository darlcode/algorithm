// 백준 10250번
// N번째 손님의 호텔 호수 구하기
/*
https://www.acmicpc.net/problem/10250
*/

#include <iostream>

int main() 
{
    // 변수 목록
    int testCase;
    int floor;
    int rooms;
    int NstGuest;
    int roomNumber = 0;
    int quotient = 0;
    int remainder = 0;

    std::cin >> testCase;
    for (int i = 0 ; i < testCase; i++)
    {
        std::cin >> floor >> rooms >> NstGuest;

        // 나머지와 몫 계산
        quotient = NstGuest/floor;
        remainder = NstGuest%floor;

        // 나머지가 0인 경우 floor를 1로 할당해줌
        if(remainder == 0)
        {
            remainder = floor;
            roomNumber = (remainder * 100) + quotient;
        }
        // 나머지 = 층 수, 몫 = 해당 층의 방 번호
        else
            roomNumber = (remainder * 100) + (quotient + 1);

        std::cout << roomNumber << std::endl;
    }
    

    return 0;
}