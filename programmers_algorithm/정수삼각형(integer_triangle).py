############# link : https://programmers.co.kr/learn/courses/30/lessons/43105 ##############
## 2019.10.23 ##

def solution(triangle):
    answer = []
    for i in range(len(triangle)-1, 0, -1):
        for j in range(i):
            triangle[i-1][j] = (triangle[i-1][j] + max(triangle[i][j], triangle[i][j+1]))

    answer = max(triangle).pop()
    return answer
