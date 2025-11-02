#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef set<int> usi;
typedef pair<int, vvi> pivvi;
typedef pair<int,bool> pib;
typedef unordered_map<int, int> umii;
typedef unordered_map<int, umii> umiumii;
typedef unordered_map<int, usi> umiusi;
typedef pair<int,int> pii;
typedef unordered_map<int,pib> umipib;

#define forn(i, n) for (int i = 0; i < n; i++)

vector<int> input_vi()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void print_vi(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
    v[0] = 10;
}

void print_neighbors(set<int> &neighbors)
{
    set<int>::iterator itr;
    // (*itr++)
    for (itr = neighbors.begin(); itr != neighbors.end(); itr++)
    {
        cout << (*itr) << " ";
    }
    cout << "\n";
}

void print_adjacency_list(unordered_map<int, set<int>> &adjacency_list)
{
    for (pair<const int, set<int>> &row : adjacency_list)
    {
        int start = row.first;
        set<int> neighbors = row.second;
        cout << start << " : ";
        print_neighbors(neighbors);
    }
}

pair<int, vector<vector<int>>> dummy_graph()
{
    int v = 7;
    vvi edges({{1, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}, {3, 6}, {4, 5}});
    vvi edges_weighted({{0, 2, 6}, {0, 1, 2}, {1,3,5}, {2, 3, 8}, {3, 5, 15}, {3, 4,10}, {5, 6, 6}, {4, 6, 2}});
    pair<int, vector<vector<int>>> graph1 = {v, edges};
    pair<int, vector<vector<int>>> graph_w = {v, edges_weighted};
    return graph_w;
}

void initialize_adj_list(unordered_map<int, set<int>> &adjacency_list, int v) // O(v)
{
    for (int i = 0; i < v; i++)
    {
        adjacency_list[i] = set<int>();
    }
}

void fill_adjacency_list(unordered_map<int, set<int>> &adjacency_list, pair<int, vector<vector<int>>> &graph) // O(V + E)
{

    // print zero
    // handle self loop
    // print in ascending order using unordered_map
    initialize_adj_list(adjacency_list, graph.first); // O(v)
    int v = graph.first;
    vvi edges = graph.second;
    for (vector<int> &edge : graph.second) // O(E)
    {
        int start = edge[0], end = edge[1];
        // set<int> &current_set = adjacency_list[start];
        // current_set.insert(end);
        adjacency_list[start].insert(end);
        adjacency_list[end].insert(start);
    }
}

umiumii fill_adjacency_list_weighted(pivvi &graph1){
    int v=graph1.first;
    vvi edges=graph1.second;

    umiumii weightlist;
    for(vi &edge:edges){
        int start=edge[0];
        int end=edge[1];
        int weig=edge[2];
        weightlist[start][end]=weig;
        weightlist[end][start]=weig;


    }
    
     for(int i=0;i<v;i++){
        if(weightlist.count(i)==0) weightlist[i]=umii();
    }   
    
    

    //print the list
    for(pair<const int,umii> &row:weightlist){
        int key=row.first;
        cout<<key<<" : ";
        for(pair<const int,int> &nbr:row.second){
            cout<<"("<<nbr.first<<","<<nbr.second<<") ";
        }
        cout<<endl;
    }
    return weightlist;

}
void dijkstra(int s,umiumii &list,vb &visit,umipib &todist){
    
    
            for(pii nbr:list[s]){
                if(!visit[nbr.first]){
               // int dist=nbr.second+todist[s].first; //might be change
               //use ternary to check if value is infinity then dont add
                int dist=(todist[s].first==INFINITY)?nbr.second:nbr.second+todist[s].first;
                if(todist[nbr.first].first>dist){
                    todist[nbr.first].first=dist;  // update the distance
                    
                } 
            }
        }
        int cmin=INT_MAX,choose;
        for(pair<int,pib> row:todist){
            int key=row.first;
            if(todist[key].second!=1 && row.second.first<cmin){
                cmin=row.second.first;
                choose=key;
            }
        }
        cout<<"choosing "<<choose<<endl;
        visit[s]=1; // mark visited
        todist[s].second=1; // mark finalized
        if(cmin==INT_MAX) return;
       // dijkstra(choose,list,visit,todist);

       
}
void playing_with_graphs()
{
    pair<int, vector<vector<int>>> graph1 = dummy_graph();
    //unordered_map<int, set<int>> adjacency_list;
    // fill_adjacency_list(adjacency_list, graph1);
    // print_adjacency_list(adjacency_list);
     umiumii weightlist= fill_adjacency_list_weighted(graph1);
    int st=0;
    vb visit(graph1.first,0);
   // vi todist(graph1.first,INFINITY);
    umipib todist; // declare the unordered_map
    for (int i = 0; i < graph1.first; ++i) {
        todist[i] = {INFINITY, 0}; 
    }
    dijkstra(st,weightlist,visit,todist);
    for(pair<int,pib> row:todist){
        cout<<row.first<<" : "<<row.second.first<<endl;
    }
    
}

void solve()
{
    playing_with_graphs();
}

int main()
{
    solve();
}
