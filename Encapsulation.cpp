// Principle of encapsulation : 
/*
    The properties of a class should not be public i.e. it should be private
    If the class itself wants that some of the data members can be accesed then
    It is possible and implemented using access modifires like getters, setters

    In leymen terms, the programmer can manipulate the data members using the methods of class
*/

#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel{

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

int main(){

   YouTubeChannel ytc3("CodeWithSaldina", "Saldina");
   ytc3.PublishVideo("machine learning");

   ytc3.getInfo(); // done, it made this ez
   ytc3.subscribe();
   ytc3.subscribe();
   ytc3.unsubscribe();

   


    return 0;
}
