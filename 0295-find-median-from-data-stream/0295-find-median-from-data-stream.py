from sortedcontainers import SortedList


class MedianFinder:

    def __init__(self):
        self.res = SortedList()

    def addNum(self, num: int) -> None:
        self.res.add(num)

    def findMedian(self) -> float:
        res_len = len(self.res)
        if res_len % 2 != 0:
            return self.res[(res_len) // 2]
        else:
            median = (self.res[res_len // 2 - 1] + self.res[res_len // 2]) / 2.0
            return median
        return 0
            

# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()