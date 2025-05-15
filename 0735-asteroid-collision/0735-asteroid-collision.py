class Solution(object):
    def asteroidCollision(self, asteroids):
        stk=[]
        for a in asteroids:
            while stk and a<0<stk[-1]:
                if stk[-1]<-a:
                    stk.pop()
                    continue
                elif stk[-1]==-a:
                    stk.pop()
                break
            else:
                stk.append(a)
        return stk
