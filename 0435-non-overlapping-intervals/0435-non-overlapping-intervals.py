class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        if not intervals:
            return 0
           
        intervals.sort(key=lambda x: x[1]) 
        non_overlapping_count = 1
        end_time = intervals[0][1]

        for i in range(1, len(intervals)):
            start, end = intervals[i]
            if start >= end_time: 
                non_overlapping_count += 1
                end_time = end 
        return len(intervals) - non_overlapping_count


        