#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
private:
  string Name;
  string OwnerName;
  int SubscribersCount;
  list<string> PublishedVideoTitles;

public:
  YouTubeChannel(string name, string ownerName)
  {
    Name = name;
    OwnerName = ownerName;
    SubscribersCount = 0;
  }

  void GetInfoChannel()
  {
    cout << "Name: " << Name << endl;
    cout << "OwnerName: " << OwnerName << endl;
    cout << "SubscribersCount: " << SubscribersCount << endl;

    for (string videoTitle : PublishedVideoTitles)
    {
      cout << "Video: " << videoTitle << endl;
    }
  }

  void Subscribe()
  {
    SubscribersCount++;
  }

  void Unsubcribe()
  {
    if (SubscribersCount > 0)
    {
      SubscribersCount--;
    }
  }

  void PublishVideo(string title)
  {
    PublishedVideoTitles.push_back(title);
  }
};

int main()
{
  system("clear");

  YouTubeChannel ytChannel("CodeBeauty", "Saldina");

  ytChannel.PublishVideo("C++ for beginners Video 1");
  ytChannel.Subscribe();
  ytChannel.Subscribe();

  ytChannel.PublishVideo("HTML & CSS Video 1");
  ytChannel.Subscribe();

  ytChannel.PublishVideo("C++ OOP Video 1");
  ytChannel.Unsubcribe();

  ytChannel.GetInfoChannel();

  return 0;
}