## https://programmers.co.kr/learn/courses/30/lessons/42587?language=python3

# solution 1
from collections import deque

def solution(priorities, location):
    dq = deque()
    answer = {}
    prior = 1
    
    for loc, importance in enumerate(priorities):
        dq.append([importance, loc]) 
    
    while(dq):
        if prior == len(priorities):
            importance, loc = dq.pop()
            answer[loc] = prior
            break
    
        importance, loc = dq.popleft()
        temp_dq = sorted(list(dq), reverse=True)
    
        # 나머지 인쇄대기 목록에 중요도가 더 높은 것이 있다면
        if importance < temp_dq[0][0]:
            # 현재 문서를 대기 순서 가장 끝으로 지정
            dq.append([importance, loc])

        # 지금 문서가 나머지 문서들보다 중요도가 높은 것이라면
        else:
            # 현재 문서를 인쇄
            answer[loc] = prior
            prior += 1
    
    return answer[location]
