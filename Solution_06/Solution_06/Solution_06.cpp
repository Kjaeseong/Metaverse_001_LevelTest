#include <iostream>
using namespace std;
/*
Solution_06
JOKER를 포함한 53장 카드를 섞은 후, 두 플레이어에게 7장의 카드 배분

1. 전체 카드 수(53)에 맞춰 배열 생성
    1.1. 카드 무늬는 100단위 숫자(100, 200, 300, 400)
    1.2. 카드 넘버는 2 ~ 14의 숫자(2 ~ 14)
    1.3. ex> 스페이드3 => 103,  다이아10 => 310 
2. 출력은 100단위 숫자에 따라 무늬, 10단위 숫자로 넘버 출력
3. 플레이어용으로 2차원 배열 만들어서 카드 분배
4. 뽑은 카드는 deck 배열에서 데이터 0으로 처리


*/

/*                      클래스로 짜다가 실패한 코드
class Card
{
public:
    int deck[53];
public:
    void Init()
    {
        for (int i = 100; i <= 400; i += 100)
        {
            for (int j = 2; j <= 14; j++)
            {
                deck[deckcount] = i + j;
                deckcount++;
            }
        }
        deck[52] = 666; //조커생성
    }
private:
    int deckcount = 0;
};

class Player : public Card
{
public:
    int HandCard[7];
public:
    void GetCard()
    {
        for (int i = 0; i < 7; i++)
        {
            int RandNum = rand() % 53;
            while (deck[RandNum] == 0)
            {
                RandNum = rand() % 53;
            }
            HandCard[i] = deck[RandNum];
            deck[RandNum] = 0;
        }
    }
    void PrintCard()
    {
        for (int i = 0; i < 7; i++)
        {
            switch (HandCard[i] / 100)
            {
            case 1:
                cout << "[♤";
                break;
            case 2:
                cout << "[♧";
                break;
            case 3:
                cout << "[◆";
                break;
            case 4:
                cout << "[♥";
                break;
            }
            if (HandCard[i] % 15 <= 10)
            {
                cout << HandCard[i] % 15 << "]\t";
            }
            else
            {
                switch (HandCard[i] % 15)
                {
                case 11:
                    cout << "J]\t";
                    break;
                case 12:
                    cout << "K]\t";
                    break;
                case 13:
                    cout << "Q]\t";
                    break;
                case 14:
                    cout << "A]\t";
                    break;
                }
            }
            if (HandCard[i] == 666)
            {
                cout << "[JOKER]";
            }
        }
    }
};
*/


int main()
{
    srand(time(NULL));
    int deck[53];
    int Player[2][7];

    int deckcount = 0;
    for (int i = 100; i <= 400; i += 100)
    {
        for (int j = 2; j <= 14; j++)
        {
            deck[deckcount] = i + j;
            deckcount++;
        }
    }
    deck[52] = 999;     //조커 생성

    for (int j = 0; j <= 1; j++)
    {
        for (int i = 0; i < 7; i++)
        {
            int RandNum = rand() % 53;
            while (deck[RandNum] == 0)
            {
                RandNum = rand() % 53;
            }
            Player[j][i] = deck[RandNum];
            deck[RandNum] = 0;
        }
    }

    for (int i = 0; i <= 1; i++)
    {
        cout << "Player" << i + 1 << " : ";
        for (int j = 0; j < 7; j++)
        {
            switch (Player[i][j] / 100)
            {
            case 1:
                cout << "[♤";
                break;
            case 2:
                cout << "[♧";
                break;
            case 3:
                cout << "[◆";
                break;
            case 4:
                cout << "[♥";
                break;
            }
            if (Player[i][j] % 100 % 15 <= 10)
            {
                cout << Player[i][j] % 15 << "]";
            }
            else
            {
                switch (Player[i][j] % 100 % 15)
                {
                case 11:
                    cout << "J]";
                    break;
                case 12:
                    cout << "K]";
                    break;
                case 13:
                    cout << "Q]";
                    break;
                case 14:
                    cout << "A]";
                    break;
                }
            }
            if (Player[i][j] == 999)
            {
                cout << "[JOKER]";
            }
        }
        cout << endl;
    }
}
