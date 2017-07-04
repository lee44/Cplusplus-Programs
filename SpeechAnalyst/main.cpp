#include <iostream>
#include <string.h>

using namespace std;

class SpeechAnalyst
{
public :
    SpeechAnalyst();
    void clear( );
    void addData( char * stuff );
    void addStringData( std::string stuff );
    int getNumberOfWords( ) const;
    int getNumberOfSentences( ) const;
    friend ostream& operator << ( ostream& outs, const SpeechAnalyst & f );

private:
    std::string myData;
    int words=0,sentences=0;
};

SpeechAnalyst::SpeechAnalyst(){}

void SpeechAnalyst:: addStringData( std::string stuff)
{
  myData=stuff;

  for (int i=0; i<myData.length(); ++i)
  {

    if (std::isalpha(myData[i]) && myData[i+1]==' ')
            words++;
    else if(std::isalpha(myData[i]) && std::ispunct(myData[i+1]))
            words++;


    if (myData[i]=='.')
        sentences++;
  }

}

void SpeechAnalyst::addData( char * stuff )
{
  int i=0;

  while (stuff[i])
  {
    for(int a=97;a<123;a++)
    {
        if (stuff[i]==a && stuff[i+1]==' ')
            words++;
        else if(stuff[i]==a && (stuff[i+1]=='!' || stuff[i+1]=='.' || stuff[i+1]=='?'|| stuff[i+1]==','|| stuff[i+1]==';'))
            words++;
    }
    if (stuff[i] =='.')
        sentences++;

    i++;
  }

}

std::ostream& operator<<(std::ostream& out, const SpeechAnalyst& f)
{
   if(f.getNumberOfWords()!=0)
      out << "Data has "<<f.getNumberOfWords()<<" and "<<f.getNumberOfSentences()<<" sentences"  ;
   else
      out << "No data to print out...";

   return out;
}
void SpeechAnalyst::clear( )
{
    myData="";
    words=0;
    sentences=0;
}

int SpeechAnalyst::getNumberOfWords( ) const
{
    return words;
}
int SpeechAnalyst:: getNumberOfSentences( ) const
{
    return sentences;
}

int main()
{
    SpeechAnalyst sa;
    cout << sa << endl;
    std::string speech("Fourscore and seven years ago our fathers brought forth on this continent a new nation, conceived in liberty and dedicated to the proposition that all men are created equal." );
    sa.addStringData( speech );
    cout << sa << endl;

    sa.clear();
    char * data = new char[ 50 ];
    strcpy( data, "Muffin says Hello." );
    sa.addData( data );
    cout << sa << endl;
    sa.addData( data );
    cout << sa << endl;

    return 0;
}
