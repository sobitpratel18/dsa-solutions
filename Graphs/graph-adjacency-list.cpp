#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int vertices = 5;

    vector<int> graph[5];

    graph[0].push_back(1);
    graph[0].push_back(2);

    graph[1].push_back(0);
    graph[1].push_back(3);

    graph[2].push_back(0);
    graph[2].push_back(4);

    graph[3].push_back(1);

    graph[4].push_back(2);

    cout << "Adjacency List:" << endl;

    for (int i = 0; i < vertices; i++)
    {
        cout << i << " -> ";

        for (int node : graph[i])
            cout << node << " ";

        cout << endl;
    }

    return 0;
}