def solution(ingredient):
    st = []
    cnt = 0
    
    for i in ingredient:
        st.append(i)
        
        if st[-4:] == [1,2,3,1]:
            st.pop()
            st.pop()
            st.pop()
            st.pop()
            cnt += 1
    return cnt
            