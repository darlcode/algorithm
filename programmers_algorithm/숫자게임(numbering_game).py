############ link : https://programmers.co.kr/learn/courses/30/lessons/12987 ###########
## 2019.10.29 ##

def solution(A, B):
    answer = 0
    # A, B를 정렬
    A.sort()
    B.sort()
    
    # A의 최솟값이 B의 최댓값보다 크다면 승점은 무조건 0
    if min(A) > max(B):
        return 0

    for i in range(len(A)):
        for j in range(len(B)):
            if A[i] < B[j]:
                answer += 1
                del B[j]
                break
    return answer
