def node_check(graph):
    node = (input("Enter the first node "))
    node2 = (input("Enter the second node to check whether they are connected "))
    if node in graph[node2]:
        print('Yes, they are connected')
    else:
        print('No')


def node_add(graph):
    node_add = input("Enter a new node to be added ")
    print("Now enter the nodes this node is connected to and enter -1 for stopping \n")
    x = 0
    node_connect = []
    while 1:
        x += 1
        print("Enter node ", x)
        temp = input()
        if temp == '-1':
            break
        else:
            graph[temp].append(node_add)
            node_connect.append(temp)

    graph[node_add] = node_connect
    print(graph)




    


if __name__ == '__main__':
    graph = {'A': ['B', 'C'], 'B': ['A', 'C'], 'C':['D', 'A', 'B'], 'D':['C','E'], 'E':['D']}
    node_add(graph)
