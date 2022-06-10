/*
Solution_08
변수 n을 입력받고 n * n 배열의 달팽이 배열 알고리즘 구현





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
