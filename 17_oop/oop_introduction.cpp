#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
public:
  string Name;
  string OwnerName;
  int SubscribersCount;
  list<string> PublishedVideoTitles;

  void getInfoChannel()
  {
    cout << "Name: " << Name << endl;
    cout << "OwnerName: " << OwnerName << endl;
    cout << "SubscribersCount: " << SubscribersCount << endl;

    for (string videoTitle : PublishedVideoTitles)
    {
      cout << "Video: " << videoTitle << endl;
    }
  }
};

int main()
{
  system("clear");

  YouTubeChannel ytChannel;

  ytChannel.Name = "CodeBeauty";
  ytChannel.OwnerName = "Saldina";
  ytChannel.SubscribersCount = 1800;
  ytChannel.PublishedVideoTitles.push_back("C++ for beginners Video 1");
  ytChannel.PublishedVideoTitles.push_back("HTML & CSS Video 1");
  ytChannel.PublishedVideoTitles.push_back("C++ OOP Video 1");

  ytChannel.getInfoChannel();

  return 0;
}