#include<iostream>
#include<string>
#include"DeckOfCards.h"
#include"card.h"
#include<vector>
#include<cstdlib>
#include<ctime>

//用card类进行构造函数
DeckOfCards::DeckOfCards()
{

    for (int i =0;i<52;i++)
    {
        Card card(i%13,i/13);
        deck.push_back(card);
    }

}

//洗牌
void DeckOfCards::shuffle()
{
    srand(time(0));//算法随机种子

    int swap1[52];//定义随机数组

    for (int i=0;i<52;i++)
    {

        swap1[i] = int (rand())%52;//生成随机数组


    }
    //进行随机两张牌的交换
    for (int i=0;i<52;i++)
    {
        Card change(0,0);
        change = deck[i];
        deck[i] = deck[swap1[i]];
        deck[swap1[i]] = change;

    }



}
//返回下一张牌
Card DeckOfCards::dealcard(int currentCard)
{

    cout<<deck[currentCard+1].toString()<<endl;

}
void DeckOfCards::beforecard( int num)//打印前num个牌
{
    if(num>52||num<0)
    {
        cout<<"Enter a correct number!";
    }
    else
    {
        for (int i = 0;i<num;i++)
        {
            cout<<deck[i].toString()<<endl;
        }

    }

}

bool DeckOfCards::morecard()
{
    if(currentCard==52)
    {

        return 1;
    }
    else
    {

        return 0;
    }

}
void DeckOfCards::judge(int num)
{
    int onecard=0;//判断是否有一副对子
    int twocard=0;//判断是否有两幅对子
    int threecard=0;//判断是否有3张同面值的牌
    int fourcard=0;//判断是否有4张同面值的牌
    int fivesamecard=0;//判断是否有同花
    int carcard=0;//判断是否有顺子
    string facecard[num];
    string suitcard[num];



    for (int i =0;i<num;i++)
    {
        facecard[i]=deck[i].getface();
        suitcard[i]=deck[i].getsuit();
    }
    for(int i=0;i<num-1;i++)
        for(int j=i+1;j<num;j++)
    {
        if(facecard[i]==facecard[j])
        {
            onecard=1;
        }


    }




    string p,n;
    int p1=0,n1=0,flag=0;
    for(int i=0;i<num-1;i++)
    {


        for(int j=i+1;j<num;j++)
    {

        if(facecard[i]==facecard[j]&&flag==0)
            {
                p=facecard[i];
                p1=1;
                flag=1;
            }
        else if(facecard[i]==facecard[j]&&facecard[i]!=p)
        {
            n1=1;
        }
    }

    }
    if(p1==1&&n1==1)
    {
        twocard=1;
    }

    int p3=0;
    for(int i=0;i<num-1;i++)
        for(int j=i+1;j<num;j++)
        {
            if(facecard[i]==facecard[j])
            {
                p3++;

            }



        }
    if(p3==2)
    {
        threecard=1;

    }






    if((facecard[0]==facecard[1]&&facecard[0]==facecard[2]&&facecard[0]==facecard[3])||
       (facecard[0]==facecard[1]&&facecard[0]==facecard[2]&&facecard[0]==facecard[4])||
       (facecard[1]==facecard[2]&&facecard[1]==facecard[3]&&facecard[1]==facecard[4])||
       (facecard[0]==facecard[1]&&facecard[0]==facecard[3]&&facecard[0]==facecard[4])||
       (facecard[0]==facecard[2]&&facecard[0]==facecard[3]&&facecard[0]==facecard[4]))
    {

        fourcard=1;
    }





    if(suitcard[0]==suitcard[1]&&suitcard[0]==suitcard[2]&&suitcard[0]==suitcard[3]&&suitcard[0]==suitcard[4])
    {
        fivesamecard=1;
    }




    if((facecard[0]==(facecard[1]+'1')&&facecard[0]==(facecard[2]+'2')&&facecard[0]==(facecard[3]+'3')&&facecard[0]==(facecard[4]+'4'))||
       (facecard[4]==(facecard[3]+'1')&&facecard[4]==(facecard[2]+'2')&&facecard[4]==(facecard[1]+'3')&&facecard[4]==(facecard[0]+'4')))
    {
        carcard=1;
    }

    if(onecard==1)
    {
        cout<<"there have two same card"<<endl;
    }
    else
    {
        cout<<"there have not two same card"<<endl;
    }


    if(twocard==1)
    {
        cout<<"there have double same card"<<endl;
    }
    {
        cout<<"there have not double same card"<<endl;
    }

    if(threecard==1)
    {
        cout<<"there have three identical card"<<endl;
    }
    else
    {
        cout<<"there have not three identical card"<<endl;
    }
    if(fourcard==1)
    {
        cout<<"there have four identical card"<<endl;
    }
    else
    {
        cout<<"there have not four identical card"<<endl;
    }
    if(fivesamecard==1)
    {
        cout<<"there have five cards of the same suit"<<endl;
    }
    else
    {
        cout<<"there have not five cards of the same suit"<<endl;
    }
    if(carcard==1)
    {
        cout<<"there have Shun Zi card"<<endl;
    }
    else
    {
        cout<<"there have not Shun Zi card"<<endl;
    }
}

