class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        # return str(int(num1)*int(num2))
        res=[0]*(len(num1)+len(num2))
        for i in reversed(num1):
            for j in reversed(num2):
                digit=i*j
                
        
