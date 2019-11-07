#include <iostream>
#include <string>
#include <array>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;

inline bool hasOnePair(const vector<Card> &);    // 1对
inline bool hasTwoPairs(const vector<Card> &);   // 2对
inline bool hasThreeFaces(const vector<Card> &); // 3张同牌
inline bool hasFourFaces(const vector<Card> &);  // 4张同牌
inline bool hasFlush(const vector<Card> &);      // 同花
inline bool hasShot(const vector<Card> &);       // 顺子
int main()
{
    DeckOfCards deck;
    deck.shuffle();
    array<vector<Card>, 4> side;
    int curS = 0;
    for (int i = 0; i < 20; i++)
    {
        side[i % 4].push_back(deck.dealCard());
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "\nSIDE " << i + 1 << " :" << endl;
        for (Card card : side[i])
        {
            cout << card.toString() << endl;
        }
        if (hasFourFaces(side[i]))
            cout << "Four Faces" << endl;
        else if (hasThreeFaces(side[i]))
            cout << "Three Faces" << endl;
        else if (hasTwoPairs(side[i]))
            cout << "TWO PAIRS" << endl;
        else if (hasOnePair(side[i]))
            cout << "ONE PAIR" << endl;

        if (hasFlush(side[i]))
            cout << "Flush !!!" << endl;
        if (hasShot(side[i]))
            cout << "Shot !!!" << endl;
    }
}
inline bool hasOnePair(const vector<Card> &vec)
{
    int suit[4] = {0};
    int face[13] = {0};
    for (Card card : vec)
    {
        suit[card.getSuit()]++;
        face[card.getFace()]++;
    }
    for (int i = 0; i < 13; i++)
        if (face[i] == 2)
            return true;
    return false;
} // 1对

inline bool hasTwoPairs(const vector<Card> &vec)
{

    int face[13] = {0}, flag = 0;
    for (Card card : vec)
        face[card.getFace()]++;

    for (int i = 0; i < 13; i++)
        if (face[i] == 2)
            flag++;

    return flag == 2 ? true : false;
} // 2对

inline bool hasThreeFaces(const vector<Card> &vec)
{
    int face[13] = {0};
    for (Card card : vec)
        face[card.getFace()]++;

    for (int i = 0; i < 13; i++)
        if (face[i] == 3)
            return true;
    return false;
} // 3张同牌

inline bool hasFourFaces(const vector<Card> &vec)
{

    int face[13] = {0};
    for (Card card : vec)
        face[card.getFace()]++;

    for (int i = 0; i < 13; i++)
        if (face[i] == 4)
            return true;
    return false;

} // 4张同牌

inline bool hasFlush(const vector<Card> &vec)
{
    int suit[4] = {0};
    for (Card card : vec)
        suit[card.getSuit()]++;
    for (int i = 0; i < 4; i++)
        if (suit[i] == 5)
            return true;
    return false;

} // 同花

inline bool hasShot(const vector<Card> &vec)
{
    int face[13] = {0};
    for (Card card : vec)
        face[card.getFace()]++;

    for (int i = 0; i < 13; i++)
        if (face[i] == 1 && i <= 8)
        {
            for (int j = i; j < i + 5; j++)
                if (!face[j])
                    return false;
            return true;
        }
    return false;
} // 顺子