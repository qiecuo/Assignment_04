#include "DeckOfCards.h"
#include <time.h>
#include <vector>
#include "Card.h"
DeckOfCards::DeckOfCards()//default constructor
{
    number=0;
    for(int i=1;i<14;i++)
        for(int j=1;j<5;j++)
        {
         deck.push_back(Card(i,j));
        }
}
void DeckOfCards::shuffle()//shuffle the poker
{
    cout<<"Shuffling..."<<endl;
    srand((unsigned)time(NULL));
    int num=rand()%51;//to produce a random number
    for(int i=0;i<52;i++)
    {
        num=rand()%51;
        if(num!=i&&num<52&&num>=0)
        {
            deck[52]=deck[i];
            deck[i]=deck[num];
            deck[num]=deck[52];
        }
        else
            i--;

    }
    cout<<"Shuffle the end!"<<endl;

}
Card & DeckOfCards::dealCard()//a function to return the next card
{

    if(number<52)
    {
        currentCard=deck[number].getFace();
        currentCardSuit=deck[number].getFace();
        number++;
        return deck[number-1];
    }

}
bool DeckOfCards::moreCards()//to judge whether there have cards
{
    if(number<52)//to judge whether there have cards
        return true;
    else
        return false;
}
void DeckOfCards::hangOutCard()//a function to hang out the cards
{
    cout<<"Hand out poker:"<<endl;
    vector<Card> card;
    int faceNumber=0;//to store the same face card number
    int suitNumber=0;//to store the same suit card number
    int continueFace;//to store the continue face card number
    int twoSameFace=0;//to record whether there are a pairs cards have the same face
    int threeSameFace=0;//to record whether there are three cards have the same face
    int fourSameFace=0;//to record whether there are four cards have the same face
    int num=14;
    for(int i=0;i<5;i++)
    {
        Card &p=dealCard();
        card.push_back(p);
        continueFace+=p.getFace();
        if(num>p.getFace())
            num=p.getFace();
        cout<<p.toString()<<endl;
    }
    for(int i=0;i<4;i++)
    {
        faceNumber=0;
        for(int j=i+1;j<5;j++)
        {
            if(card[i].getFace()==card[j].getFace())
                faceNumber++;
            if(card[i].getSuit()==card[j].getSuit() && i==0)
                suitNumber++;
        }
        if(faceNumber==1)
            twoSameFace++;
        else if(faceNumber==2)
            threeSameFace++;
        if(faceNumber==3)
            fourSameFace++;
    }
    for(int i=num+1,j=0;j<4;i++,j++)
    {
        num+=i;
    }
    cout<<"End of poker hand out"<<endl<<endl;
        cout<<"There are "<<twoSameFace<<" pairs pokers"<<endl<<endl;
    if(threeSameFace==1)
        cout<<"There are three poker with the same faces"<<endl<<endl;
    else
        cout<<"There are no three poker with the same faces"<<endl<<endl;
    if(fourSameFace==1)
        cout<<"There are four poker with the same face"<<endl<<endl;
    else
        cout<<"There are no four poker with the same face"<<endl<<endl;
    if(suitNumber==4)
        cout<<"There are five poker with the same suit"<<endl<<endl;
    else
        cout<<"There are no five poker with the same suit"<<endl<<endl;
    if(num==continueFace)
        cout<<"There are five poker with the continue face"<<endl<<endl;
    else
        cout<<"There are no five poker with the continue face"<<endl<<endl;


}

