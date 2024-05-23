from ai_pkg.search import Graph, Problem, Node
from numpy import Infinity
from collections import deque

city_map = Graph(dict(
    S = dict(A=4, B=4, C=3),
    A = dict(D=4, E=3, F=3),
    B = dict(G=2),
    C = dict(H=3, I=2),
    E = dict(J=4, K=4),
    G = dict(L=5, M=5),
    I = dict(N=3, O=2)),
    directed = True)


class CityProblem(Problem):
    def __init__(self, initial, goal, graph):
        Problem.__init__(self, initial, goal)
        self.graph = graph
    def actions(self, A):
        return list(self.graph.get(A).keys())
    def result(self, state, action):
        return action
    def path_cost(self, cost, A, action, B):
        return cost + (self.graph.get(A, B) or Infinity)

def breadth_first_search(problem):
    global track_path
    frontier = deque([Node(problem.initial)])
    explored = set()
    track_path = [problem.initial]
    while frontier:
        node = frontier.popleft()
        if problem.goal_test(node.state):
            return node
        explored.add(node.state)
        expanded = node.expand(problem)
        for child in expanded:
            track_path.append(child.state)
            if child.state not in explored and child not in frontier:
                if problem.goal_test(child.state):
                    return child
                frontier.append(child)
    return None

if __name__=='__main__':
    track_path = []
    start = 'S'
    goal  = 'K'
    romania_problem = CityProblem(start, goal, city_map)
    node = breadth_first_search(romania_problem)
    if node is not None:
        final_path = node.solution()
        final_path.insert(0, start)
        print('TRACKING PATH: ', ' -> '.join(track_path))
        print('SOLUTION PATH: ', ' -> '.join(final_path))
        print('COST: ', node.path_cost)
