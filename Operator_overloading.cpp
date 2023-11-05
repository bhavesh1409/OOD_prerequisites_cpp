#include<iostream>
using namespace std;

struct YouTubeChannel(){
    string Name;
    int subs_ct;

    YouTubeChannel(string nalo, int subs)
    {
        name = nalo;
        subs_ct = subs;
    }
};

void operator << (ostream& COUT, YouTubeChannel &ytChannel){
    
}

int main(){

    YouTubeChannel yt1 = YouTubeChannel("FitnessWorld", 10000);
    cout << yt1;

    return 0;
}