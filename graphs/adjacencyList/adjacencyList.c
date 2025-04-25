#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int vertex;
  struct node* next;
}node;

typedef struct graph{
  int numVertices;
  struct node** adjList;
  int isDirected;
}graph;

node* createNode(int v){
  node* newNode = malloc(sizeof(node));
  newNode -> vertex = v;
  newNode -> next = NULL;
  return newNode;
}

graph* createGraph(int vertices, int isDirected){
  graph* graf = malloc(sizeof(graph));
  graf->numVertices = vertices;
  graf->isDirected = isDirected;

  graf->adjList = malloc(vertices*sizeof(node*));

  for(int i=0; i<vertices; i++){
    graf->adjList[i] = NULL;
  }
  return graf;
}

void addEdge(graph* graph, int src, int dest){
  node* newNode = createNode(dest);
  newNode->next = graph->adjList[src];
  graph->adjList[src] = newNode;

  if(!graph->isDirected){
    newNode = createNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
  }
}

void printGraph(graph* graf){
  printf("Vertex:  Adjacency List\n");
  for(int v=0; v < graf->numVertices; v++){
    node* temp = graf->adjList[v];
    printf("%d --->", v);
    while(temp){
      printf(" %d ->", temp->vertex);
      temp = temp->next;
    }
    printf("NULL\n");
  }
}


int main() {
    // Create an undirected graph with 3 vertices
    graph* undirectedGraph = createGraph(3, 0);

    // Add edges to the undirected graph
    addEdge(undirectedGraph, 0, 1);
    addEdge(undirectedGraph, 0, 2);
    addEdge(undirectedGraph, 1, 2);

    printf("Adjacency List for Undirected Graph:\n");
    printGraph(undirectedGraph);

    // Create a directed graph with 3 vertices
    graph* directedGraph = createGraph(3, 1);

    // Add edges to the directed graph
    addEdge(directedGraph, 1, 0);
    addEdge(directedGraph, 1, 2);
    addEdge(directedGraph, 2, 0);

    printf("\nAdjacency List for Directed Graph:\n");
    printGraph(directedGraph);

    return 0;
}

