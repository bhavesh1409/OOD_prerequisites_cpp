/*
Polymorphism :- descibes the ability of an object to exist in multiple forms, that means
that we can have two or more objects that inherit from the same base class, those methods can have 
the same name but different implementation.

In lesser words :- same name diff imnplementation
*/

#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel{
    private:
    string Name; 
    int Subs_count;
    list<string> published_video_titles;

    protected:
    string Ownername;
    int contentQuality; // making this in protected bcuz i want to access it from derived classes

    public:
    YouTubeChannel(string nm, string oname)
    {
        Name = nm;
        Ownername = oname;
        Subs_count = 0;
        contentQuality = 0;
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
    void chkanalytics(){
        if(contentQuality < 5)
        {
            cout <<Name<<" is a poor channel bcuz its contentQuality < 5"<<endl;
        }

        else 
        {
            cout << Name <<" has decent contentQuality" <<endl;
        }
    }

};


class CookingChannel : public YouTubeChannel{ 
    
    public: //this is the constructor that we have directly invoked from the base class 
    CookingChannel(string naam, string malik_ka_naam) : YouTubeChannel(naam, malik_ka_naam){
    }

    void Practice(){
        cout << "practcing cooking......"<<endl;
        contentQuality++;
    }
};


class SingersChannel : public YouTubeChannel{ 
    
    public: //this is the constructor that we have directly invoked from the base class 
    CookingChannel(string naam, string malik_ka_naam) : YouTubeChannel(naam, malik_ka_naam){
    }

    void Practice(){
        cout << "practcing singing and go to singing class......"<<endl;
        contentQuality++;
    } 
    /*
        Now observe that we have 2 practice methods in this code
        For the base class youtubechannnel, we have two derived classes,
        namely, cookingchannel & singerschannel

        After creating the object of these derived classes u will get different works
        done using same method name

        hence, we achieved same method name, differnt implementation
        i.e. polymorphism
    */
};

int main(){

    CookingChannel CookWithIdli("Anna's kitchen", "indu pindually");
    CookWithIdli.subscribe();
    CookWithIdli.subscribe();
    CookWithIdli.unsubscribe();
    CookWithIdli.getInfo();

    // lets make a proprty named content quality for the class, 
    // practice increases content quality

    CookWithIdli.practice();
    CookWithIdli.practice();
    CookWithIdli.practice();
    CookWithIdli.practice();
    CookWithIdli.practice();
    CookWithIdli.practice();

    SingersChannel JohnSings("JohnSings", "John");
    JohnSings.subscribe();
    JohnSings.subscribe();
    JohnSings.unsubscribe();
    JohnSings.getInfo();
    JohnSings.practice();

    // pointer of our base class
    YouTubeChannel *yt1 = &CookingChannel;
    YouTubeChannel *yt2 = &SingersChannel;

    yt1->chkanalytics();
    yt2->chkanalytics();

    /*
        here we have used polymorphism in order to implement this cookingchannel and singerschannel
        again, differnt implementation & same name

        Also, we have seen how can we pointers to point to an object of derived class
        and store that in a pointer of base class and then we have invoked the chkanalytics method
        using these pointers of base class.
    */

    
    return 0;
}