
class Card
{
public:
    //Declare functions
    Card(int) ;
    void setFace(int);
    string getFace();
    void setSuit(int);
    string getSuit();
    const Card operator+( const Card & );
    void toString();

private:
    int Face , Suit , ID ;
    static string allFace[15];
    static string allSuit[5];
    string fface , ssuit ;
}; // end class Time

