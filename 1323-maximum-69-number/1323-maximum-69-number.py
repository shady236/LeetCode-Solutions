class Solution:
    def maximum69Number (self, num: int) -> int:
        numDigits = list(str(num))
        
        for i in range(len(numDigits)):
            if numDigits[i] == '6':
                numDigits[i] = '9'
                break
        
        return int("".join(numDigits))