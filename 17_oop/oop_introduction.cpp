#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
private:
  string Name;
  int SubscribersCount;
  list<string> PublishedVideoTitles;

protected:
  string OwnerName;

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

class CookingYouTubeChannel : public YouTubeChannel
{
public:
  CookingYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
  {
  }

  void Pratice()
  {
    cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
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

  CookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy");

  cookingYtChannel.Subscribe();
  cookingYtChannel.Subscribe();
  cookingYtChannel.Subscribe();

  cookingYtChannel.PublishVideo("Apple pie");
  cookingYtChannel.PublishVideo("Chocolate cake");

  cookingYtChannel.Unsubcribe();

  cookingYtChannel.Pratice();
  cookingYtChannel.GetInfoChannel();

  return 0;
}