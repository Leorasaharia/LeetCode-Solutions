class RecentCounter(object):
    def __init__(self):
        self.t=[]
    def ping(self, t):
        self.t.append(t)   
        s=t-3000 
        i=0  
        while i <len(self.t):
            if self.t[i]<s:  
                i+=1           
            else:
                break  
        if i>0:      
            self.t = self.t[i:]
        r=len(self.t)
        return r    
