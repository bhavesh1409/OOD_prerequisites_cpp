#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel{
    private:
    string Name; 
    string Ownername;
    int Subs_count;
    list<string> published_video_titles;

    public:
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
    void subscribe()
    {
        Subs_count++;
    }
    void unsubscribe()
    {
        if(Subs_count > 0)
            Subs_count--;

        return;
    }
    void PublishVideo(string title)
    {
        published_video_titles.push_back(title);
    }
};

// here we are inherting the public data members of YoutubeChannel class
// to CookingChannel class
// go through the syntax carefully
// here "YoutubeChannel" is base class and "CookingChannel" is derived class
class CookingChannel : public YouTubeChannel{ 
    
    public:
    CookingChannel(string naam, string malik_ka_naam) : YouTubeChannel(naam, malik_ka_naam){
    }

    void Practice(){
        cout << "practcing cooking......"<<endl;
    }
};

int main(){

    CookingChannel CookWithIdli("Anna's kitchen", "indu pindually");
    CookWithIdli.subscribe();
    CookWithIdli.subscribe();
    CookWithIdli.unsubscribe();
    CookWithIdli.getInfo();
    CookWithIdli.practice();

     

    return 0;
}