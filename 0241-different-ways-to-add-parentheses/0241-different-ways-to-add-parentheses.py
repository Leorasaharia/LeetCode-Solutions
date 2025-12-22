class Solution(object):
    def diffWaysToCompute(self, expression):
        
        def solve(exp):
            res=[]
            for i in range(len(exp)):
                if exp[i] in '+-*':
                    a=solve(exp[:i])
                    b=solve(exp[i+1:])
                    for x in a:
                        for y in b:
                            if exp[i]=='+':
                                res.append(x+y)
                            elif exp[i]=='-':
                                res.append(x-y)
                            else:
                                res.append(x*y)
            if not res:
                num=int(exp)
                res.append(num)
            return res
        
        return solve(expression)
