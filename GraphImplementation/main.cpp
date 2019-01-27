#include<bits/stdc++.h>

using namespace std;

void graphinsertion(vector <int> adjacent[],int vertice, int edge)
{
    adjacent[vertice].push_back(edge);
    adjacent[edge].push_back(vertice);
}

void printgraph(vector<int>adjacent[],int totalVertices)
{
    for(int i=0;i<totalVertices;i++)
    {
        cout<<"The number of vertices "<<i<<" = ";
        for(int j=0;j<adjacent[i].size();j++)
        {
            cout<<adjacent[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int Vertices=5;
    vector <int> adjacent[Vertices];
    graphinsertion(adjacent, 0, 1);
    graphinsertion(adjacent, 0, 4);
    graphinsertion(adjacent, 1, 2);
    graphinsertion(adjacent, 1, 3);
    graphinsertion(adjacent, 1, 4);
    graphinsertion(adjacent, 2, 3);
    graphinsertion(adjacent, 3, 4);
    printgraph(adjacent,Vertices);
    return 0;
}

/*Source Leet code:https://www.geeksforgeeks.org/graph-and-its-representations/*/
