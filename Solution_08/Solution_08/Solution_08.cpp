/*
Solution_08
변수 n을 입력받고 n * n 배열의 달팽이 배열 알고리즘 구현

2차원 배열 [n][n] 생성 후 좌표 연산 방식으로 구현하려 했으나
다른 문제에서 시간을 많이 소모했습니다.

테스트 끝나더라도 주말간 마저 풀어보겠습니다.

*/

#include <iostream>
#include <vector>
using namespace std;




int main()
{
    vector<int> arr;

    int n;
    cout << "배열의 크기를 입력하세요 : ";
    cin >> n;
    cout << endl;
    

    for (int i = 1; i <= n * n; i++)
    {
        arr.push_back(i);
    }











    //테스트 출력용 코드
    for (int i = 0; i < n * n; i++)
    {
        cout << arr[i] << endl;
    }

}
