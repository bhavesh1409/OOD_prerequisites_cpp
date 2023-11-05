// oops allows us to represnt the real life objects in programing
// class -> a template oe a blueprint
// object -> instance/object of the class
// ex car class has multiple objects like company of a car, brand and others

#include<iostream>
#include<list>
using namespace std;

// Classes are user defined data type
class YouTubeChannel{

public:
    string Name; // these are attributes of this class
    string Ownername;
    int Subs_count;
    list<string> published_video_titles;
};

int main(){

    YouTubeChannel ytc; // creating the object "ytc" of the class YouTubeChannel
    // NOTE : all the data members of the class are private by default

    ytc.Name = "CodeWithMe";
    ytc.Ownername = "Bhavesh";
    ytc.Subs_count = 100;
    ytc.published_video_titles = {"basics cpp", "dev basics", "devC"};

    cout << "Name: " << ytc.Name<<endl;
    cout << "owner name: " << ytc.Ownername<<endl;
    cout << "subscribers count " << ytc.Subs_count<<endl;
    // cout << "" << ytc.Name<<endl;

    cout << "video title : " <<endl;
    for(string val : ytc.published_video_titles)
    {
        cout << val << " ";
    }

    return 0;
}
