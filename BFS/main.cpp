// Breadth-first search Andriy Bench 2022
//very simple graph which will use BFS to see who you can sell mangos to.

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

using namespace std;

//Check to see if the person is a mango dealer
bool isDealer(string name)
{
  if(name.back() == 'm')
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool search(const string &name, const unordered_map<string, vector<string>> &graph)
{
  //create a queue for BFS to get the next value
  queue<string> search_queue;

  //create a unordered_set to add all the visited nodes to
  unordered_set<string> visited;

  //sting for one person
  string person;

  //add all your relations to the queue
  vector<string> related = graph.find(name)->second;
  for(auto name = related.begin(); name != related.end(); name++)
    {
      search_queue.push(*name);
    }


  while(!search_queue.empty())
  {
    //take the first person of the queue
    person = search_queue.front();
    search_queue.pop();

    //check if the person is in the searched_queue
    if(visited.find(person) == visited.end())
    {
      cout << "Person: " << person << endl;

      cout << "-----------------QUEUE----------------" << endl;

      //check to see if the person is the dealer
      if(isDealer(person))
      {
        cout << "Your mango dealer is " << person << endl;
        return true;
      }

      //add all your relations to the queue
      vector<string> related = graph.find(person)->second;
      for(auto name = related.begin(); name != related.end(); name++)
      {
          search_queue.push(*name);
      }

      related.clear();

      for (size_t i = 0; i < search_queue.size(); i++)
      {
        cout << search_queue.front() << endl;
        search_queue.push(search_queue.front());
        search_queue.pop();
      }

      
      cout << "--------------------------------------" << endl;
      cout << endl;

      visited.insert(person);

    }

  }

cout << "No mango dealers in your network :(" << endl;
return false;

}


int main()
{

    unordered_map<string, vector<string>> graph;
    graph.insert({"you", {"alice", "bob", "claire"}});
    graph.insert({"bob", {"anuj", "peggy"}});
    graph.insert({"alice", {"peggy"}});
    graph.insert({"claire", {"thor", "jonny"}});
    graph.insert({"anuj", {"thomas", "jenny"}});
    graph.insert({"peggy", {"benjamin", "percy"}});
    graph.insert({"thor", {}});
    graph.insert({"jonny", {}});
    graph.insert({"thomas", {"anuj"}});
    graph.insert({"jenny", {"Martham"}});
    graph.insert({"benjamin", {}});
    graph.insert({"percy", {}});
    graph.insert({"Martham", {}});

    std::string name = "you";
    bool result = search(name, graph);

    return result;
}

