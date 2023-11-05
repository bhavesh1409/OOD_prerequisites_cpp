#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel{

public:
    string Name; 
    string Ownername;
    int Subs_count;
    list<string> published_video_titles;

    YouTubeChannel(string nm, string oname)
    {
        Name = nm;
        Ownername = oname;
        Subs_count = 0;
    }

    void getInfo()
    {
        cout << "Name: " << Name<<endl;
        cout << "owner name: " << Ownername<<endl;
        cout << "subscribers count " << Subs_count<<endl;
        // cout << "" << ytc.Name<<endl;

        cout << "video title : " <<endl;
        for(string val : published_video_titles)
        {
            cout << val << " ";
        }
    }

};

int main(){

    // YouTubeChannel ytc;

    // ytc.Name = "CodeWithMe";
    // ytc.Ownername = "Bhavesh";
    // ytc.Subs_count = 100;
    // ytc.published_video_titles = {"basics cpp", "dev basics", "devC"};

    // cout << "Name: " << ytc.Name<<endl;
    // cout << "owner name: " << ytc.Ownername<<endl;
    // cout << "subscribers count " << ytc.Subs_count<<endl;
    // // cout << "" << ytc.Name<<endl;

    // cout << "video title : " <<endl;
    // for(string val : ytc.published_video_titles)
    // {
    //     cout << val << " ";
    // }

    // if i want to create new object of this class, for that i have to write all the above
    // code again and this will unnecesaarily increase length of code and is time consuming

    // YouTubeChannel ytc2;

    // ytc2.Name = "CodeWithHarry";
    // ytc2.Ownername = "Harry";
    // ytc2.Subs_count = 1000000;
    // ytc2.published_video_titles = {"basics java", "dev basics", "devC++"};

    // cout << "Name: " << ytc2.Name<<endl;
    // cout << "owner name: " << ytc2.Ownername<<endl;
    // cout << "subscribers count " << ytc2.Subs_count<<endl;
    // // cout << "" << ytc.Name<<endl;

    // cout << "video title : " <<endl;
    // for(string val : ytc2.published_video_titles)
    // {
    //     cout << val << " ";
    // }

    // for solving this problem of lengthy code, we introduce constructors
    /*
        Constructors : 
            1. has the same name as that of a class
            2. does not has a return type
    */

   // now, after creating constructors we can directly initialize the members in 1 line

   YouTubeChannel ytc3("CodeWithSaldina", "Saldina");
   ytc3.published_video_titles.push_back("machine learning");

   // for accesing the members of a class we are gain and again usinng cout in multiple
   // lines, can't we just make a method inside a class that directly prints all 
   // the members of the class

   ytc3.getInfo(); // done, it made this ez

    return 0;
}
