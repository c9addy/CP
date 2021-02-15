import sys
class node:
	def __init__(self, val, children):
		self.val = val
		self.children = children


def check(graph,v,w):
	summ = 0
	if(len(graph[v].children) == 0):
		return 0

	if(w%len(graph[v].children) == 0):
		output = 0
		new_w = w//len(graph[v].children)
		for i in graph[v].children:
			output += check(graph,i,new_w)

		return output
	
	else:
		return w


N = int(sys.stdin.readline())

graph = {}
for i in range(N):
	temp = []
	graph[i+1] = node(i+1,temp)

parents = sys.stdin.readline()[:-1].split(' ')

for i in range(N-1):
	parents[i] = int(parents[i])


for i in range(N-1):
	nodee = i+2
	parent = parents[i]
	graph[parent].children.append(nodee)


q = int(sys.stdin.readline())
for j in range(q):
	v, w = input().split(" ")
	v = int(v)
	w = int(w)
	ans = check(graph,v,w)
	print(ans)